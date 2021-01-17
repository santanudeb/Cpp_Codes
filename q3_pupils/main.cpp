#include <iostream>

using namespace std;

class pupil{
public:
    int i,a[3],no_of_pupils[3],sum=0,avg=0,x=0;
    void get_pupils()
    {
        for(i=0;i<3;i++)
        {
            cout<<"Enter height of pupil: "<<i+1<<endl;
            cin>>a[i];
            cout<<"Enter no of pupil same height "<<i+1<<endl;
            cin>>no_of_pupils[i];
            a[i]= a[i]*no_of_pupils[i];
            sum=sum+a[i];
        }
        avg = sum/3;
    }
    void set_pupils()
    {
            for(i=0;i<3;i++)
        {
            cout<<"height of pupil: "<<a[i]<<endl;
            cout<<"no of pupil same height: "<<no_of_pupils[i]<<endl;

        }
        cout<<"avg height of pupil: "<<avg<<endl;
    }
    };
    int main()
    {
        pupil p1;
        p1.get_pupils();
        p1.set_pupils();

        return 0;
    }

/*

3.
.Pupils’ heights
The health visitor at a schoo
l is going to measure the heights of all pupils. For each class
he makes a statistics giving the number of pupils of each height and the average height.
Make a C++ program that helps the health visitor making the statistics.
Example :
In a class with 20 pu
pils the height of the individual pupils in centimeter are :
175,
167,
160,
164,
183,
187,
188,
179,
176,
175,
169,
175,
176,
178,
165,
169,
173,
165,
187,
178.
Height                  Number of pupils
160
2
164
1
165
2
167
1
....
.....
....
....
18
8
.....
The average height is 174.0

*/
