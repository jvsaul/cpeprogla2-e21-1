#include<iostream>
#include<cmath>
#include <fstream>

using namespace std;

int i,j,n;
int constant,highest;
int cnt,count;

int main(){
	ifstream f("input.txt");
	f>>i>>j;
	constant=j;
	
	for(count=i;count<j;count++){
		cnt=count;
		n=1;
		while(cnt>1){
			if ((cnt%2)==0){
				cnt=(cnt/2);
				n++;
			}
			else if ((cnt%2)!=0){
				cnt=((3*cnt)+1);
				n++;
			}
		
		if (n>highest){
			highest=n;
		}
		
		}
	}
	
	cout<<i<<" "<<constant<<" "<<highest;
	
	return 0;
}

