#include<iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream f("input.txt");
    
    int num,sum,i;
    
    while (f >> num) {
    	for(i=0;i<num;i++){
    		if((i%3==0)||(i%5==0)){
    			sum+=i;
			}
		}
    }
    cout<<sum;

    system("pause");
    return 0;
}   
    
