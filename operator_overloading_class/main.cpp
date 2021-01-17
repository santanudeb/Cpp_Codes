#include <iostream>

using namespace std;

class test
{
private:
    int i;
public:
    test():i(0){}
    void operator ++()
    {
        ++i;
    }
    void show()
    {
        cout<<"i="<<i<<endl;
    }
};

int main()
{
    test obj;
    obj.show();
    ++obj;
    //obj++; //postfix call
    obj.show();

    return 0;
}
