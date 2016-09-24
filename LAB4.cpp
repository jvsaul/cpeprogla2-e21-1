#include <iostream>
#include <cstring>
using namespace std;

void prob1(){
	char str1[100];
	char str2[100];
	int result;
	cout<<"Enter your two words"<<endl;
	cin>>str1;
	cin>>str2;

	
	
	switch(strcmp(str1,str2)){
		case -1:
			cout<<"negative";
			break;
		case 0:
			cout<<"equal";
			break;
		case 1:
			cout<<"positive";
			break;
	}
	
}

void prob2(){
	char str1[100];
	char str2[100];
	cout<<"Enter your two words"<<endl;
	cin>>str1;
	cin>>str2;
	
	strcpy(str1,str2);
	cout<<str2;
	
}

void prob3(){
	char str1[100];
	char str2[100];
	cout<<"Enter your two words"<<endl;
	cin>>str1;
	cin>>str2;
	
    strcat(str1," ");
	cout<<strcat(str1,str2);
	

}

void prob5(){
	char str1[100];
	char str2[100];
	char str3[100];
	int i,j;
	
	
	cout<<"enter your 3 words: ";
	cin>>str1>>str2>>str3;
	
	j=strlen(str1);
	
	for(i=0;i<j;i++){
		str1[i]=tolower(str1[i]);
		str1[0]=toupper(str1[0]);
		cout<<str1[i];
	}
	j=strlen(str2);
	cout<<" ";
	
	for(i=0;i<j;i++){
		str2[i]=tolower(str2[i]);
		str2[0]=toupper(str2[0]);
		cout<<str2[i];
	}
	j=strlen(str3);
	cout<<" ";
	
	
	for(i=0;i<j;i++){
		str3[i]=tolower(str3[i]);
		str3[0]=toupper(str3[0]);
		cout<<str3[i];
	}
	

}

void prob6(){
	
	char str1[30];
	int n;
	
	cout<<"Problem #6 Reverse Vertical Order"<<endl;
	cout<<"Enter a string: ";
	gets(str1);
	n=strlen(str1);
	for(int i=n;i>=0;i--) {
		if (str1[i]==32) {
			int j=i+1;
			while(str1[j]!=32&&j<n){
				cout<<str1[j];
				j++;
			}
		cout<<endl;
		}
	}
	int i=0;
	while(str1[i]!=32){
		cout<<str1[i];
		i++;
	}

}

int main(){
	int i;
	
	cout<<"Select Problem #: "<<endl<<" 1 2 3 5 6"<<endl;
	cin>>i;
	
	switch(i){
		case 1:
			prob1();
			break;
		case 2:
			prob2();
			break;
		case 3:
			prob3();
			break;
		case 5:
			prob5();
			break;
	}
	
	return 0;
}
