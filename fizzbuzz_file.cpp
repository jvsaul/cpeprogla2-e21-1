#include <iostream>
#include <fstream>
using namespace std;


int main(){
	
	ifstream f("input.txt");
	int i;
	while(f>>i){
		switch(i>0){
			case 1:
				if((i%3==0)&&(i%5==0)){
					cout<<"FizzBuzz"<<endl;
					break;
				}
			case 2:
				if(i%5==0){
					cout<<"Buzz"<<endl;
					break;
				}
			case 3:
				if(i%3==0){
					cout<<"Fizz"<<endl;
					break;
				}
				
			default:
				cout<<i<<endl;
		}
	}
	
	
	system("pause");
	return 0;
	
}
