// Header file for Point class.
#ifndef POINT_H
#define POINT_H

class Point
{
    private:
        double coordinateX; // stores coordinate x
        double coordinateY; // stores coordinate y
        
    public:
        Point();
        Point(double, double); // constructor
        void setX(double); // Mutator mehtod - sets value of coordinate X
        void setY(double); // Mutator Method - sets value of coordinate Y 
        double getX() const; // accessor method - returns coordinate x
        double getY() const; // accessor method - returns coordinate y
        Point operator + (const Point &); //overloading ( + ) operator
        Point operator / (const double&); // overloading ( / ) operaator
};

#endif