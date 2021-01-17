#include <iostream>
using namespace std;

class SpaceShip
{
public:
    void fly()
    {
        cout<<"fly";
    }
};
class shuttle:public SpaceShip
{
public:
     void land()
     {
         cout<<"land";
     }
};

int main()
{
    SpaceShip *s1 = new shuttle();
    s1->land();

    return 0;
}


/*

23. Create a class called SpaceShip with a fly() method. Inherit shuttle from SpaceShip
and add a land() method. Create a new Shuttle, upcast by pointer or reference to a
SpaceShip and try to call the land() method. Explain the results.

*/
