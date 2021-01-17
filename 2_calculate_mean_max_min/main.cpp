#include <iostream>

using namespace std;

int main()
{
    int a[10],i,n,sum=0,smallest,largest;
    float mean;
    cout<<"Enter how many elements you want to have: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++) //sum
       {
        sum = sum + a[i];
       }

    mean= (float)sum/n; //avg

    cout<<"sum: "<<sum<<endl;
    cout<<"mean: "<<mean<<endl;

    cout<<"Searching for smallest element ...\n\n";
	smallest=a[0];
	for(i=0; i<n; i++)
	{
		if(smallest>a[i])
		{
			smallest=a[i];
		}
	}
	cout<<"Smallest Element = "<<smallest<<endl;

	cout<<"Searching for largest element ...\n\n";
	largest=a[0];
	for(i=0; i<n; i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
		}
	}
	cout<<"Largest Element = "<<largest;
       //cout << "The smallest element is " << *std::min_element(a,a+n) << '\n';
       //cout << "The largest element is "  << *std::max_element(a,a+n) << '\n';

    return 0;
}
