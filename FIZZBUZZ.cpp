#include <iostream>
using namespace std;

int main()
{
	int i,x;
	for (i=1;i<101;i++)
	{
		
		
		switch (x){
			case 1:
				if ((i%3==0) && (i%5==0)){
					cout<<"FizzBuzz"<<endl;
					break;
				}
			case 2:
				if (i%5==0){
					cout<<"Buzz"<<endl;
					break;
				}
			case 3:
				if (i%3==0){
					cout<<"Fizz"<<endl;
					break;
				}
			default:
				cout<<i<<endl;
		}
	}
	return 0;
}
