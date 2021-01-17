#include <iostream>
using namespace std;

class orange {
private:   int a;
public:
    orange()
    {     a=0;
    }
   friend class apple;     // Friend Class
};
class apple {
private:   int b;
public:   explicit apple(orange& o) {
        orange o1 =o;
    }
    void show(orange& o) {
        cout << "orange::o= " << o.a<<endl;
    }    };
int main()
{
   orange o;
   apple a(o);
   a.show(o);

   return 0;
}


/*

17
. Create two classes, Apple and Orange. In Apple, create a constructor that takes a
n
Orange as an argument. Create a function that takes an Apple and call that function with
an Orange to show that it works. Now make the apple constructor explicit to demonstrate
that the automatic type conversion is thus prevented. Modify the call to your
function so
that the conversion is made explicitly and thus succeeds.

*/
