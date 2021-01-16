#include <iostream>

using namespace std;

class test
{
public:
    string nameis;
    void print(void);
    void print2(void)
    {
        cout<<"World!\n";
    }
    void name();
};

void test::print(void)
{
    cout<<"Hello!\n";
}

void test::name()
{
    cout<<"Name is= "<< nameis;
}

int main()
{
    test a,b,c,d;
    a.print();
    b.print2();
    c.name();
    d.nameis="John Cena";
    return 0;
}
