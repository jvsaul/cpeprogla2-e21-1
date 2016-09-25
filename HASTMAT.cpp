#include<iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	int i,j,k,l;
	cout <<"Enter the number of soldiers in Hashmat's army and his opponent's army: "<<endl;

	for (int i=1; i<=3; i++)
	{	
		for(l=1;l<=3;l++)		
		if(i<=2^36){
			cin>>j>>k;
			l=j-k;
		    cout<<l<<endl;
						}	
		
	}	
	return 0;
}	

