#include <iostream>
#include <iomanip>
using namespace std;

int i,j;
float grade;
char r;
struct Student{
	int ID;
	char studname[30];
	struct Quizzes{
		float quiz;
	};
	Quizzes quizzes[3];
};

void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}


int main(){
	
	Student stud[5];
	for(i=0;i<5;i++){
		cout<<"Student "<<i+1<<endl;
		cout<<"ID: ";
		cin>>stud[i].ID;
		NewLine();
		cout<<"Name: ";
		cin.getline(stud[i].studname,29);
		cout<<"Enter 3 quize(s): ";
		for(j=0;j<3;j++){	
			cin>>stud[i].quizzes[j].quiz;	
		}
	}
	
	cout<<setw(5)<<"No."<<setw(20)<<"Student No."<<setw(30)<<"Name"<<setw(15)<<"Grade"<<setw(20)<<"Remark"<<endl;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			grade+=stud[i].quizzes[j].quiz;
		}
		cout<<setw(5)<<i+1<<setw(20)<<stud[i].ID<<setw(30)<<stud[i].studname<<setw(15)<<setprecision(4)<<grade/3<<setw(20);
			if( grade>=75 ){
				cout<<"Passed";
			}
			else{
				cout<<"Failed";
			}		
	}
	
	return 0;
	
}
