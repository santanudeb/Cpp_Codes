#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void perf(int);
class str
{
    private:
        string arg="-3.5+2.6+8.2+1";
    float index=0,sum=0.0;
    int count_plus=0,count_minus=0;
    bool oper=true;
    int i;
    public:
    void check1()
    {
             for(int i = 0; i < arg.length(); ++i)
                {
                if(arg[i]=='+')
                {
                        perf(i);
                    oper=true;
                    index= i+1;
                }
                else if(arg[i]=='-')
                {
                    perf(i);
                    oper=false;
                    index= i+1;
                }
                else if(arg[i]=='\0')
                {
                    perf(i-1);
                }
                }
    }
     void display()
                {
                    cout<<"total"<<sum<<endl;
                    cout<<"positive no is"<<count_plus<<endl<<"negative no is"<<count_minus;

                }
    void perf(int a)
  {
    string single_no =arg.substr(index,a);
    const char *single_char=single_no.c_str();
    double num = atof(single_char);
  if(oper)
  {
      sum = sum + num;
    count_plus++;
  }
  else
  {
      sum = sum - num;
      count_minus++;
  }
  }
};
int  main()
{
str s1;
s1.check1();
s1.display();
return 0;
}
