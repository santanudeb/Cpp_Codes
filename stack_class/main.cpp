#include<bits/stdc++.h>
using namespace std;
#define n 5
#define MAX 1000
int top;
string a[MAX];

class Stack
{
public:
        //Maximum size of Stack
    Stack()  { top = -1; }
    Stack(string *a,int no)
    {
        for(int i=0;i<no;i++)
            *a='0';
    }
    bool push(string x);
    string pop();
    bool isEmpty();
    void display();
};
bool Stack::push(string x)
{
    if (top >= MAX)
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        return true;
    }
}
string Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        string x = a[top--];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}
void Stack::display()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
    }
    else
    {
        for(int i=top;i>0;i--)
        cout<<"\n"<<a[top];
    }
}
// Driver program to test above functions
int main()
{
    Stack s[n];
    Stack s1(a,n);
    int i;
    string num;
    for(i=0;i<n;i++)
    {
        cout<<"enter push element";
        cin>>num;
        s[i].push(num);
    }
    for(i=top;i>=0;i--)
    {
        string y = s[i].pop();
        cout<<"popped elements"<<y<<endl;
    }

    return 0;
}


/*

18. Create a new version of the Stack class that contains the default constructor as before,
and a second constructor that takes as its arguments an array of pointers to objects and the
size of that array. This constructor should move through the array and push each pointer
onto the stack. Test your class with an array of string.

*/
