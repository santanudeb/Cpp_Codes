#include <iostream>

using namespace std;

class A
{
    int a,b;
public:
    A() //Constructor can only be declared in public; returns no value;
    {
        a=100;
        b=50;
    }
    void show ()
    {
    cout<<"a= "<<a;
    cout<<"b= "<<b;
    }
};


int main()
{
    A a;
    A b;
    a.show();
    return 0;
}
