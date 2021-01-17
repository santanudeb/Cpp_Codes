#include <iostream>

using namespace std;

class test
{
private:
    int a;
public:
    test():a(10){}
    void operator +()
    {
        a=a+1;
    }
    void show ()
    {
        cout<<"a is: "<<a<<endl;
    }
};

int main()
{
    test obj;
    obj.show();
    +obj;
    obj.show();

    return 0;
}
