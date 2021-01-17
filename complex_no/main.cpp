#include <iostream>

using namespace std;

class complex
 {
 int a,b;
 public:
 complex operator +(complex c2)
 {
 complex c3;
 c3.a=a+c2.a;
 c3.b=b+c2.b;
 return c3;
 }
 complex operator -(complex c2)
 {
 complex c3;
 c3.a=a-c2.a;
 c3.b=b-c2.b;
 return c3;
 }
 complex operator *(complex c2)
 {
 complex c3;
 c3.a=(a*c2.a)-(b*c2.b);
 c3.b=(b*c2.a)+(a*c2.b);
 return c3;
 }
 complex operator /(complex c2)
 {
 complex c3;
 c3.a=((a*c2.a)+(b*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
 c3.b=((b*c2.a)-(a*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
 return c3;
 }
 friend ostream & operator << (ostream &out, const complex &c);
    friend istream & operator >> (istream &in,  complex &c);
 };
 ostream & operator << (ostream &out, const complex &c)
{
    out << c.a;
    out << "+i" << c.b << endl;
    return out;
}

istream & operator >> (istream &in,  complex &c)
{
    cout << "\nEnter Real Part ";
    in >> c.a;
    cout << "\nEnter Imagenory Part ";
    in >> c.b;
    return in;
}
 int main()
 {
 complex c1,c2,c3;
 int choice,cont;
 do
 {
 cout<<"\t\tCOMPLEX NUMBERS\n\n1.ADDITION\n\n2.SUBTRACTION\n\n3.MULTIPLICATION\n\n4.DIVISION";
 cout<<"\n\nEnter your choice : ";
 cin>>choice;
 if(choice==1||choice==2||choice==3||choice==4)
 {
 cout<<"\n\nEnter the First Complex Number";
 cin>>c1;
 cout<<"\n\nEnter the Second Complex Number";
 cin>>c2;
 }
 switch(choice)
 {
 case 1     : c3=c1+c2;
            cout<<"\n\nSUM = ";
            cout<<c3;
            break;
 case 2     : c3=c1-c2;
            cout<<"\n\nResult = ";
            cout<<c3;
            break;
 case 3 : c3=c1*c2;
            cout<<"\n\nPRODUCT = ";
            cout<<c3;
            break;
 case 4     : c3=c1/c2;
            cout<<"\n\nQOUTIENT = ";
            cout<<c3;
            break;
 default     : cout<<"\n\nUndefined Choice";
 }
 cout<<"\n\nDo You Want to Continue?(1-Y,0-N)";
 cin>>cont;
 }while(cont==1);

 return 0;
 }
