// specification file for the Die class
#ifndef DIE_H
#define DIE_H

class Die{
    private:
        int sides;
        int value;
    public:
        Die(int = 6); // Constructor with default value for dice to have 6 sides
        void roll(); // rolls the die
        int getSides(); // returns the number of sides
        int getValue(); // returns the die's value
};

#endif