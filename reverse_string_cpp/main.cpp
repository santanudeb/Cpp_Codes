#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >>str;
    str=string(str.rbegin(),str.rend());
    cout << "Reverse String is: "<<str;
    return 0;
}
