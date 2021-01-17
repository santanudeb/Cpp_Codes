#include <iostream>
using namespace std;
template<class t>
void fib(t start, t next,int n)
{
    t t1,t2;
    t1 = start;
    t2 = next;
    t nextTerm;
   cout<<"Fibonacci Series: ";
    int i;
    for (i = 1; i <= n; ++i)
    {
        cout<<t1<<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
int main()
{
    int n;
    cout<<"enter last term";
    cin>>n;
    fib(0.1,1.1,n);

    return 0;
}


/*

26. Templates the Fibonacci() function on the type of value that it produces(so it can
produce long, float etc. instead of just int)

*/
