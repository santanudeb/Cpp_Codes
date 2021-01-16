#include <iostream>

using namespace std;

class publication // parent class or Base class;
{
public:
    char title[20];
    float price;

    void getdata()
    {
    cout<<"Enter title:";
    cin>>title;

    cout<<"Enter Price";
    cin>>price;
    }

    void putdata()
    {
        cout<<title;
        cout<<price;
    }

};

class book : public publication // <derived class name> : (visibility level) <base class name>
{
public:
    int page_count;
    void getdata()
    {
        cout<<"Enter title:";
        cin>>title;

        cout<<"Enter Price";
        cin>>price;
        cout<<"Enter page count:";
        cin>>page_count;
    }

    void putdata()
    {
        cout<<title;
        cout<<price;
        cout<<page_count;
    }

};

class tape : public publication // <derived class name> : (visibility level) <base class name>
{
public:
    float playing_time;
    void getdata()
    {
        cout<<"Enter playing time:";
        cin>>playing_time;
    }

    void putdata()
    {
        cout<<playing_time;
    }

};

int main()
{
    book a;
    tape b;

    a.getdata();
    b.getdata();

    a.putdata();
    b.putdata();


    return 0;
}

/* Notes:

new class can inheritance only from public and protected; can't access protected;

*/
