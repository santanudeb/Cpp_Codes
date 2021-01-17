#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
    private:
        double val;
    public:
        Number(): val(0)
        {}
         operator int()
         {
             return val;
         }
        void getdata()
        {
            cout << "enter number: ";
            cin >> val;
        }

        void showdata()
        {
            cout << " " << val << endl;
        }
        Number operator + (Number) const;
        Number operator - (Number) const;
        Number operator * (Number) const;
        Number operator / (Number) const;
        void operator = (const Number &n ) {
         val = n.val;
        }
};
Number Number::operator + (Number arg2) const
{
    Number temp;
    temp.val = val + arg2.val;
    return temp;
}
Number Number::operator - (Number arg2) const
{
    Number temp;
    temp.val = val - arg2.val;
    return temp;
}
Number Number::operator * (Number arg2) const
{
    Number temp;
    temp.val = val * arg2.val;
    return temp;
}
Number Number::operator / (Number arg2) const
{
    Number temp;
    temp.val = val / arg2.val;
    return temp;
}
int main()
{
    Number obj1, obj2, obj3;
    int choice;
    obj1.getdata();
    cout << "1st Number: ";
    obj1.showdata();
    cout << endl;
    obj2.getdata();
    cout << "2nd Number: ";
    obj2.showdata();
    cout << endl;
    cout << "Select a choice: 1: +,   2: -,   3: *,   4:/     ";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
        case 1:
            obj3 = obj1 + obj2;
            break;
        case 2:
            obj3 = obj1 - obj2;
            break;
        case 3:
            obj3 = obj1 * obj2;
            break;
        case 4:
            obj3 = obj1 / obj2;
            break;
        default:
            cout << "Invalid choice! " << endl;
    }
    cout << "Result ";
    int j = Number(obj3);
    cout<<j;
    cout << endl;

    return 0;
}


/*

16. Write a Number class that holds a double, and add overloaded operators for +,-.*,/ and assignment.
Choose the return values for these functions so that expressions can be
chained together, and for efficiency. Write an automatic type conversion operator int().

*/
