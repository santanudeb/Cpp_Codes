#include<iostream>
using namespace std;

class A{
    int val_A;
public:
    A()
    {
        val_A=5;
    }
};
class B
{
    int val_B;
public:
    B()
    {
        val_B=100;
    }
    friend class C;
};
class C:public A
{
public:
    void showA(B& x) {
        // Since B is friend of A, it can access
        // private members of A
        std::cout << "B::b=" << x.val_B <<endl;
    }

};
int main()
{
    B b1;
    C c1[2];
    c1[1].showA(b1);
    c1[2].showA(b1);

    return 0;
}

/*

20. Cretae two classes, A and B, with default constructors that announce themselves.
Inherit a new class C from A, and create a member object of B in C, but do not create a
constructor for C. Create an n object of class C and show the results.

*/
