#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Called Dog's default constructor\n";
}

Dog::Dog(std::string typ)
{
    std::cout << "Called Dog's constructor with parametrs\n";
    _type = typ;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Called Dog's copy constructor\n";
    *this = other;
}

Dog& Dog::operator= (const Dog& rhs)
{
    std::cout << "Called Dog's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

std::string Dog::getType() const
{
    return (_type);
}

Dog::~Dog()
{
    std::cout << "Called Dog's destructor\n";
}

void Dog::makeSound() const
{
    std::cout << "Woooof!!\n";
}