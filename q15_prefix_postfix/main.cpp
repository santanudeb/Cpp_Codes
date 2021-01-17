#include <iostream>

using namespace std;

class test
{
	int a,b,x,y;
	public:
		test()
		{
			a=5;
			b=10;
            x=20;
			y=30;
		}

		void show()
		{
			cout<<"a: "<<a<<endl<<"b: "<<b;

		}
		void show2()
		{
		    cout<<"x: "<<x<<endl<<"y: "<<y;
		}

		friend void operator --(test &);
		friend void operator --(test &,int);

		friend void operator ++(test &);
		friend void operator ++(test &,int);

};
void operator --(test &obj)
{
	--obj.a;
	--obj.b;
}
void operator --(test &ob1,int)
{
	ob1.a--;
	ob1.b--;
}
void operator ++(test &obj)
{
	++obj.x;
	++obj.y;
}
void operator ++(test &ob1,int)
{
	ob1.x++;
	ob1.y++;
}

int main()
{
	test p1,p2,q1,q2;

	cout<<"With operator-- : "<<endl<<endl;
	cout<<"Before prefix decrement"<<endl;
	p1.show();
    --p1;
	cout<<"\nAfter prefix decrement"<<endl;
	p1.show();
   cout<<"\nBefore postfix decrement"<<endl;
	p2.show();
	p2--;
    cout<<"\nAfter postfix decrement"<<endl;
    p2.show();
    cout<<""<<endl<<endl;

    cout<<"With operator++ : "<<endl<<endl;
    cout<<"Before prefix decrement"<<endl;
	q1.show2();
    ++q1;
	cout<<"\nAfter prefix decrement"<<endl;
	q1.show2();
   cout<<"\nBefore postfix decrement"<<endl;
	q2.show2();
	q2++;
    cout<<"\nAfter postfix decrement"<<endl;
    q2.show2();


    return 0;
}
