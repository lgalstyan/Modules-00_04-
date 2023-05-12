#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << "Called Animal's constructor\n";
}

Animal::Animal(const Animal &other)
{
    std::cout << "Called Animal's copy constructor\n";
    *this = other;
}

Animal& Animal::operator= (const Animal& rhs)
{
    std::cout << "Called Animal's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Called Animal's destructor\n";
}

std::string Animal::GetType()
{
    return (_type);
}

void Animal::SetType(std::string str)
{
    _type = str;
}