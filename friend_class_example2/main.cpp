#include <iostream>

using namespace std;

class A;
class B
{
private:
    int b;
public:
    void getvalue (int x)
    {
        b=x;
    }
    void showvalue (void)
    {
        cout<<"Value of B: "<<b;
        cout<<"\n";
    }
    friend void add(A,B);
};

class A
{
private:
    int a;
public:
    void getvalue (int x)
    {
        a=x;
    }
    void showvalue (void)
    {
        cout<<"Value of A: "<<a;
        cout<<"\n";
    }
    friend void add(A,B);
};

void add(A ob1,B ob2)
{
    int addition;
    addition=ob1.a + ob2.b;
    cout<<"Addition of A and B: "<<addition; //ob1.a,ob2.b;
};

int main()
{
    A a;
    B b;
    a.getvalue(100);
    b.getvalue(200);
    a.showvalue();
    b.showvalue();
    add(a,b);

    return 0;
}
