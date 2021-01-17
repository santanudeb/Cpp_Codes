#include<iostream>
using namespace std;

class staff{
    public:
    int code;
    string name;
    void setcode()
    {
        cout<<"Enter code"<<endl;
        cin>>code;
    }
    void setname()
    {
        cout<<"Enter name"<<endl;
        cin>>name;
    }
    void getcode()
    {
        cout<<"code\t";
        cout<<code<<endl;
    }
    void getname()
    {
        cout<<"name\t";
        cout<<name<<endl;
    }
    };

class teachers:public staff{
    public:
        string subject,department;
        void setsubject()
            {
        cout<<"Enter subject"<<endl;
        cin>>subject;
            }
            void setdepartment()
            {
        cout<<"Enter department"<<endl;
        cin>>department;
            }

        void getsubject()
            {
                cout<<"subject\t";
                cout<<subject<<endl;
            }
        void getdepartment()
        {
            cout<<"department\t";
            cout<<department<<endl;
        }
};
    class typist:public staff{
        public:
            int spreed;
        void setspreed()
        {
                    cout<<"Enter spreed"<<endl;
                    cin>>spreed;
        }
        void getspreed()
        {
            cout<<"spreed\t";
            cout<<spreed<<endl;
        }
    };
 class officer:public staff{
     public:
    char grade;
    void setgrade()
        {
                    cout<<"Enter grade"<<endl;
                    cin>>grade;
        }
        void getgrade()
        {
            cout<<"grade\t";
            cout<<grade<<endl;
        }
 };

 class regular:public typist{
     public:
    int salary;
    void setsalary()
        {
                    cout<<"Enter salary"<<endl;
                    cin>>salary;
        }
        void getsalary()
        {
            cout<<"salary\t";
            cout<<salary<<endl;
        }
 };
 class casual:public typist{
     public:
            int daily_wages;
            void setdaily_wages()
        {
                    cout<<"Enter daily_wages"<<endl;
                    cin>>daily_wages;
        }
        void getdaily_wages()
        {
            cout<<"daily_wages\t";
            cout<<daily_wages<<endl;
        }
 };
int main()
{
    int n,i;
    cout<<"enter total no of employee"<<endl;
    cin>>n;
    staff s1[n];
    teachers t1[n];
    typist t2[n];
    officer o1[n];
    regular r1[n];
    casual c1[n];
    cout<<"------------------------------------------------------\n";
        for(i=0;i<n;i++)
            {
                cout<<"------------------------------------------------------\n";
                s1[i].setcode();
                s1[i].setname();
                t1[i].setsubject();
                t1[i].setdepartment();
                t2[i].setspreed();
                o1[i].setgrade();
                r1[i].setsalary();
                c1[i].setdaily_wages();
                cout<<"------------------------------------------------------\n";

            }
            cout<<"------------------------------------------------------\n";
            for(i=0;i<n;i++)
            {
                cout<<"------------------------------------------------------\n";
                s1[i].getcode();
                s1[i].getname();
                t1[i].getsubject();
                t1[i].getdepartment();
                t2[i].getspreed();
                o1[i].getgrade();
                r1[i].getsalary();
                c1[i].getdaily_wages();
                cout<<"------------------------------------------------------\n";
            }
            cout<<"------------------------------------------------------\n";

  return 0;
}


/*

27. An educational institution wishes to maintain a database of its employees.
The database is devided into a number of classes whose hierchial relationships
are shown below. The fig. also shows minimum information required for each class.
Specify all the classes and define functions to create the database and retrieve individual
information as & when required.

*/
