#include <iostream>
#include <conio.h>

using namespace std;

class sum // class class name;
{
private: // only accessible within the class and by friend class;
    int a,b,t; // data member
    //can declare data,function here;
// data usually declared in private and functions usually declared in private;
public: // can use outside the class
    void getdata(void); // function member;
    void putdata(void); // function member; calling function putdata;
    //can declare data,function here;
};

void sum::getdata(void) // defining function: here getdata; (return type) <class name>::<function name> (parameter list)
{
    cout <<"Enter value for a & b:\n";
    cin >>a>>b;
}

void sum::putdata(void) // defining function: here putdata;
{
    t=a+b;
    cout<<"Addition of "<<a<<" and "<<b<<" is :"<<t;
}

int main()
{
    sum obj; // creating object: <class name> <variable name>;
    obj.getdata(); // calling function; <variable name>.<function name>();
    obj.putdata();
    getch();
    return 0;
}
