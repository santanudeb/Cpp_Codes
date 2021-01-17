#include <iostream>
using namespace std;

 class Subject {
public:
     void f()
     {
         cout<<"call f"<<endl;
     }
     void g()
     {
         cout<<"call g"<<endl;
     }
     void h()
     {
         cout<<"call h"<<endl;
     }

 };
  class Proxy:public Subject{
    public:
        Proxy()
        {
            f();
            g();
            h();
        }
        void show()
        {
            cout<<"dynamic change"<<endl;
        }
  } ;


  class Implementation1:public Subject, public Proxy {
    public:

  };

  class Implementation2:public Subject,public Proxy
  {
    public:

  };

  int main()
  {
    Subject *s1 = new Proxy();
    Proxy *p1 = new Implementation1();
    p1->show();
    Proxy *p2 = new Implementation2();
    p2->show();

    return 0;
  }

/*

24. This exercise creates the design pattern called proxy. Start with a base class Subject
and gives it three functions: f(),g(), and h(). Now inherit a class Proxy and two classes
Implementation1 and Implementation2 from Subject. Proxy should contain a pointer to a
Subject and all the member functions for Proxy should just turn around and make the
same calls through the subject pointer. The Proxy constructor takes a pointer to a Subject
that is installed in the Proxy(usually by the constructor). In main(), create two different
Proxy objects that use the two different implementations. Now modify Proxy so that you
can dynamically change implementations.

*/
