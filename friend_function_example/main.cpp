#include <iostream>

using namespace std;


class B;

class A
{
public:
    void showB(B& );
};

class B
{
private:
    int b;
public:
    B()  {  b = 20; }
    friend void A::showB(B& x); // Friend function
};

void A::showB(B &x)
{
    // Since show() is friend of B, it can
    // access private members of B
    std::cout << "B::b = " << x.b;
}

int main()
{
    A a;
    B x;
    a.showB(x);
    return 0;
}
/*class A
{
public:
    void showB(B&);
};

class B
{
    int b;
public:

    {
        b=0;
    }
    friend void A::showB(B&x);
};

void A::showB(B&x)
{
    cout<<"B::b = "<<x.b;
};

int main()
{
    A a;
    B b;

    return 0;
}*/
