// Abdullah Yaser Abdo Ali Alnadhari
#include <iostream>
#include <string>
#include <cstdlib>
#include "Point.cpp"
using namespace std;

int main()
{
    int num; // number of points for the user to enter
    cout << "How many points you want to enter => ";
    cin >> num;
    cout << "Enter the coordinates (x and y) => ";
    cin >> ws;
    
    string coords[99] = {};
    for (int i = 0; i < num; i++)
    {  
        getline(cin, coords[i]);
        if (i == num - 1){
            break;
        } else {
            cout << "Enter the coordinates (x and y) => ";
        }
    }


    int Xcoord[99] = {};
    int Ycoord[99]= {};
    Point p[num];
    for (int i=0; i < num; i++)
    {
        Xcoord[i] = stod(coords[i].substr(0, 1));
        Ycoord[i] = stod(coords[i].substr(2, 1));
        p[i].setX(Xcoord[i]);
        p[i].setY(Ycoord[i]);
    }
    


    cout << endl;   
    cout << "Point      x   y" << endl;
    for (int i=0; i < num; i++)
    {
        cout << i+1 << "          " << Xcoord[i] << "   " << Ycoord[i] << endl;
    }
    cout << endl;

    Point p3;
    for (int i=0; i < num; i++)
    {
        p3  = p3 + p[i];
    }
   
    double dbnum = (double) num;
    Point midpoint = p3 / dbnum;

    cout << "Middle Point   " << midpoint.getX() << "   " << midpoint.getY() << endl;

    system("pause");
    return 0;
}