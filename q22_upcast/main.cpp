#include <iostream>

using namespace std;

class A //base
{
    private:
        int a;
    protected:
        int x;
    public:
        void setVal(int v)
        {
            x=v;
        }
};

class B:private A //derived
{
    public:
        void printVal(void)
        {
            setVal(10); //accessing public member function here
            cout << "value of x: " << x << endl; //protected data member direct access here
        }
};

int main()
{
        A obja;
        B objb;
        A *pA=&objb;

        objb.printVal();
        pA ->setVal();
        pB ->printVal();
        return 0;
}
//error
