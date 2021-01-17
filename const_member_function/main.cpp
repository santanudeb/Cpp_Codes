#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v = 0)
    {
        value = v;
    }
    const int getValue1(int a)
    {
        value = a;
        return value;
    }
     int getValue2(int a)
    {
        value = a;
        return value;
    }
    int getValue3(int &value)
    {
        return this->value;
    }
    const int getValue4(int &value)
    {
        return this->value;
    }
    int getValue5(const int &value)
    {
        return this->value;
    }
    const int getValue6(const int &value)
    {
        return this->value;
    }
};
int main()
{
    Test t(20);
    int value=100;
    cout<<t.getValue1(100)<<endl;
    cout<<t.getValue2(200)<<endl;
    cout<<t.getValue3(value)<<endl;
    cout<<t.getValue4(value)<<endl;
    cout<<t.getValue5(value)<<endl;
    cout<<t.getValue6(value)<<endl;
    cout<<endl;

    return 0;
}


/*

19. Write a class that has a const member function and a non-const member function.
Write three functions that take an object of that class as an argument; the first takes it by
value, the second by reference and third by const reference. Inside the functions, try to
call both member functions of your class and explain the results.

*/
