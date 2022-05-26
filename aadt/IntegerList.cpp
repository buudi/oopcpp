// implementation file for the IntegerList Class
#include <iostream>
#include <cstdlib>
#include "IntegerList.h"
using namespace std;


// The Constructor sets each element to zero.
IntegerList::IntegerList(int size)
{
    list = new int[size];
    numElements = size;
    for (int ndx = 0; ndx < size; ndx++)
    list[ndx] = 0;
}

// The destructor releases the allocated memory
IntegerList::~IntegerList()
{
    delete [] list;
}

// isValid member function.
// This private member function returns true if the argument
// is a valid subscript, or false otherwise.
bool IntegerList::isValid(int element) const
{
    bool status;
    if (element < 0 || element >= numElements)
        status = false;
    else
        status = true;
    return status;
}
