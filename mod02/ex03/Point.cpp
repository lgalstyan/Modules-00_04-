#include "Point.hpp"

Point::Point()
{
    const_cast<Fixed &>(_x) = 0;
    const_cast<Fixed &>(_y) = 0;
}

Point::Point(const Fixed a, const Fixed b)
{
    const_cast<Fixed &>(_x) = a;
    const_cast<Fixed &>(_y) = b;
}

Point::Point(const Point &other)
{
    const_cast<Fixed &>(_x) = other._x;
    const_cast<Fixed &>(_y) = other._y;
}
Point& Point::operator = (const Point& rhs)
{
    if (this != &rhs)
    {
        const_cast<Fixed &>(_x).setRawBits(rhs._x.getRawBits());
        const_cast<Fixed &>(_y).setRawBits(rhs._y.getRawBits());
        // _y = rhs._y;
    }
    return (*this);
}

Point::~Point()
{

}

const Fixed Point::getX()
{
    return (_x);
}

const Fixed Point::getY()
{
    return (_y);
}