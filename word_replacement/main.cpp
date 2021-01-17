#include <iostream>

using namespace std;

void find_and_replace(string& source, string const& find, string const& replace)
{
    for(string::size_type i = 0; (i = source.find(find, i)) != string::npos;)
    {
        source.replace(i, find.length(), replace);
        i += replace.length();
    }
}
int  main()
{
    string text;

    // simple replace
    text = " Indecent word ";
    cout << "string:  " << text << endl;
    find_and_replace(text, "Indecent", "replacement");
    cout << "replace: " << text << endl;

    cout << endl;

    // simple replace 2
    text = "shit";
    //output->>>>
    cout << "string:  " << text << endl;
    find_and_replace(text, "shit", "bodily waste");
    cout << "replace: " << text << endl;

    cout << endl;

    text = " idiot ";
    cout << "string:  " << text << endl;
    find_and_replace(text, "idiot", "orphan");
    cout << "replace: " << text << endl;

    return 0;
}
