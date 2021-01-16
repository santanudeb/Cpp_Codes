#include <iostream>

using namespace std;

class A
{
private:
    int x;
public: A()
{
x=20;
}
friend class B; // friend class, class B is friend of class A;
};

class B
{
private:
    int y;
public:
    void showA(A i)
    {
        // class B is friend of Class A, so it can access private of class A;
        cout<<"A::a="<<i.x; // x is private int of class a;
    }
};

int main()
{
  A x1;
  B y;
  y.showA(x1);
  return 0;
}
