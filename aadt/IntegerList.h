// specification file for the IntegerList class.
#ifndef INTEGERLIST_H
#define INTEGERLIST_H

class IntegerList
{
    private:
        int *list; //pointer to the array
        int numElements; //number of elements
        bool isValid(int); //validates subscripts

    public:
        IntegerList(int); // Constructor
        ~IntegerList(); // Destructor
        void setElement(int, int); // sets element to a value;
        void getElement(int, int&); // returns an element
};

#endif