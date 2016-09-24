#include <iostream>
using namespace std;

int main()
{
	int n,i,a[100],x,count;
	cout<<"\nEnter n:";
	cin>>n;
	cout<<"\nInput "<<n<<" numbers: ";
	
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Search a number: ";
	cin>>x;
	count=0;
	for (i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			count++;
		}
		
	}	
	cout<<"\nThe number"<<x<<"is present"<<count<<"times";
	
	return 0;
}
