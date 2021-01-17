#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

/*

syntax: outside of class
return type classname::operator op (assignment list)
{
body
}

syntax: inside of class
return type operator op (assignment list)
{
body
}

op-symbol

for unary:
    x op or op x
    x.operator()
    operator(x) //using friend

for binary:
    x op y
    x.operator(y)
    operator(x,y) //using friend

*/
