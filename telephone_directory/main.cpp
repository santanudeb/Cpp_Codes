#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define n 4
using namespace std;

struct telephone{
    int mobile_no;
    char first_name[20];
    char last_name[20];
};
typedef struct telephone t;
void sort_data(struct telephone[]);
void sort_data1(struct telephone[]);
int main()
{
    int i;
    t t1[n];

    for(i=0;i<n;i++)
    {
        cout<<"enter first name: ";
        cin>>t1[i].first_name;

        cout<<"enter last name: ";
        cin>>t1[i].last_name;

        fflush(stdin);
        cout<<"enter telephone no";
        cin>>t1[i].mobile_no;

    }

    for(i=0;i<n;i++)
    {
        cout<<"\n";
        cout<<"\tfirst name: "<<t1[i].first_name;
        cout<<"\tlast name: "<<t1[i].last_name;
        cout<<"\ttelephone no: "<<t1[i].mobile_no;
    }
    sort_data(t1);
    sort_data1(t1);
    cout<<"\nAfter sorting: \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        cout<<"\tfirst_name : "<<t1[i].first_name;
        cout<<"\tlast_name : "<<t1[i].last_name;
        cout<<"\ttelephone_no : "<<t1[i].mobile_no;
        cout<<"\n";
    }

    return 0;
}

void sort_data(t t2[])
{
int i,j;
t temp;
    for(i=1; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
        if (strcmp(t2[j].last_name, t2[j+1].last_name) < 0)
              {
                  temp=t2[j];
                  t2[j]=t2[j+1];
                  t2[j+1]=temp;
              }
        }
    }
}
void sort_data1(t t2[])
{
int i,j;
t temp;
    for(i=1; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
        if (strcmp(t2[j].last_name, t2[j+1].last_name) == 0 && strcmp(t2[j].first_name, t2[j+1].first_name)>0)
              {
                  temp=t2[j];
                  t2[j]=t2[j+1];
                  t2[j+1]=temp;
              }
        }
    }
}

//incomplete.
