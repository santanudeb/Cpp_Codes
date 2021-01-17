#include <iostream>
#include <conio.h>

using namespace std;

class A
{
    int a;
public:
    void getval_a (int);
    int get_a(); // for return type;
};

class B:public A // class b can access public of class A;
{
    int b,c;
public:
    void getval_b (int);
    void add ();
    void display ();
};

void A::getval_a(int x)
{
  a=x;
};

int A::get_a()
{
   return a;
};

void B::getval_b(int x)
{
    b=x;
};

void B::add()
{
    c=get_a()+b;
};

void B::display()
{
    cout<<"value of A :"<<get_a();
    cout<<"value of B :"<<b;
    cout<<"Sum is :"<<c;
};

int main()
{
    int a,b;
    B obj;
    cout<<"Enter of A :";
    cin>>a;
    cout<<"value of B :";
    cin>>b;

    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.display();

    return 0;
}
