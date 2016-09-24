#include <iostream>
#include <iomanip>
using namespace std;


int i,j;
int tPrice;
float grade;
char r;

void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}

void prob3(){
	
struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
			int quant;
		};
		Item item[3];
	}order;
	
	double contNo;
};
	
	Customer cust[3];
	for (i=0;i<3;i++){
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cout<<"First Name: ";
		NewLine();
		cin.getline(cust[i].name.firstName,29);
		cout<<"Last Name: ";
		cin.getline(cust[i].name.lastName,29);
		cout<<"Contact No.: ";
		cin>>cust[i].contNo;
		cout<<"ORDER DATE: "<<endl;
		cout<<"Day: ";
		cin>>cust[i].order.day;
		cout<<"Month: ";
		cin>>cust[i].order.month;
		cout<<"Year: ";
		cin>>cust[i].order.year;
		cout<<"ENTER 3 ITEMS: "<<endl;
		for (j=0;j<3;j++){
		    cout<<"ID: ";
		    cin>>cust[i].order.item[j].ID;
	    	NewLine();
    	    cout<<"Name: ";
    		cin.getline(cust[i].order.item[j].itemName,29);
    		cout<<"Price: ";
    		cin>>cust[i].order.item[j].Price;
    		cout<<"Quantity: ";
    		cin>>cust[i].order.item[j].quant;
    		cout<<endl;
		}

	}
	j=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer Name"<<setw(20)<<"Order Date"<<setw(15)<<"Items"<<setw(15)<<"Price"<<setw(15)<<"Quantity"<<endl;
	for (i=0;i<3;i++){
		cout<<" "<<i+1<<setw(23)<<cust[i].name.lastName<<","<<setw(6)<<cust[i].name.firstName<<setw(11)<<cust[i].order.day<<"/"<<cust[i].order.month<<"/"<<cust[i].order.year<<endl;
    	for (j=0;j<3;j++){
    		cout<<setw(67)<<cust[i].order.item[j].itemName<<setw(15)<<cust[i].order.item[j].Price<<setw(15)<<cust[i].order.item[j].quant<<endl;
    		tPrice += cust[i].order.item[j].Price*cust[i].order.item[j].quant;
		}
		cout<<setw(96)<<"TOTAL PRICE: "<<tPrice<<endl;
		tPrice=0;
	}
	
}


void prob2(){

struct Student{
	int ID;
	char studname[30];
	struct Quizzes{
		float quiz;
	};
	Quizzes quizzes[3];
};

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
				cout<<"Passed"<<endl;
			}
			else{
				cout<<"Failed"<<endl;
			}		
	}

	
}

int main(){
	int i;
	
	cout<<"Select Problem #: "<<endl<<" 2 3 "<<endl;
	cin>>i;
	
	switch(i){
		case 2:
			prob2();
		break;
		case 3:
			prob3();
			break;
	}
	
	return 0;
}


