#include <iostream>
#include <cstdlib>
#include "Point.h"
using namespace std;
Point::Point()
{}
Point::Point(double x, double y)
{
    setX(x);
    setY(y);
}
void Point::setX(double x)
{
    coordinateX = x;
}
void Point::setY(double y)
{
    coordinateY = y;
}
double Point::getX() const
{
    return coordinateX;
}
double Point::getY() const
{
    return coordinateY;
}
Point Point::operator + (const Point &obj)
{
    Point temp;

    temp.setX(obj.getX() + getX()) ;
    temp.setY(obj.getY() + getY());
    return temp;
}
Point Point::operator / (const double &num)
{
    Point temp;
    temp.setX(getX() / num );
    temp.setY(getY() / num );    
    return temp;
}