#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Anonymous";
    _hit = 10;
    _energy = 10;
    _damage = 0;
    std::cout   << BLUE << "Hi. I am " << _name
                << " ClapTrap.\nI can attack, to take demage and be repaired.\n" << RESET;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0)
{
    std::cout   << BLUE << "Hi. I am " << _name
                << " ClapTrap.\nI can attack, to take demage and be repaired.\n" << RESET;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "A ClapTrap named "<< _name << " killed\n" << RESET;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& rhs)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &rhs)
    {
        _name = rhs.getName();
        _hit = rhs.getHit();
        _energy = rhs.getEnergy();
        _damage = rhs.getDamage();
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy < 1)
    {
        std::cout << "ClapTrap " << _name << " has no energy points for attack\n";
    }
    std::cout   << "ClapTrap " << _name << " attacks " << target
                << ", causing "<<_damage << " points of damage!\n";
    if (_energy > 0)
        --_energy;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit < amount)
    {
        std::cout << "No enough hit points to do demage\n";
    }
    std::cout   << "ClapTrap named " << _name
                << " takes " << amount << " damage\n";
    _hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy < 1)
    {
        std::cout   << "The ClapTrap named " << _name
                    << "has no energy points\n";
        return ;
    }
    _hit += amount;
    _energy--;
    std::cout   << "The ClapTrap named " << _name
                << "is repaired for "
                << amount << " hit points\n";
}

std::string ClapTrap::getName() const
{
    return (_name);
}

unsigned int ClapTrap::getHit() const
{
    return (_hit);
}

unsigned int ClapTrap::getEnergy() const
{
    return (_energy);
}

unsigned int ClapTrap::getDamage() const
{
    return (_damage);
}