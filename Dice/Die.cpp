// implementation file for the Die class
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function
#include "Die.h";
using namespace std;

// constructor will take the number of sides as 
// an argument then performs a roll

Die::Die(int numSides)
{
    // get the system time
    unsigned seed = time(0);  // unsigned datatype store 32-bit non-negative integer
    // seed the random generator
    srand(seed);
    // set the number of sides
    sides = numSides;

    // perform an initial roll
    roll();
}

void Die::roll()
{
    const int MIN_VALUE  = 1; // minimum die value
    
    // get a random value for the die:
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

// getSides() member function returns the no. of sides
int Die::getSides()
{
    return sides;
}

// getValue() member function returns the die's value
int Die::getValue()
{
    return value;
}