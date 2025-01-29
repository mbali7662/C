#include <iostream>
#include <fstream>
using namespace std;


struct customer{
	string name[100];
	string surname[100];
	string option[100];
	long long nationalID[100];
	int Pnumber[100];
	int Cnumber[100];
	double amount[100];
	int i;
	int select;

void display(){
	cout<<"\t\t\t\t\t WELCOME TO MOMO CASHBOOK "<<endl<<endl<<endl;
    ofstream file("customers.txt",ios::out);{
	file<<"                             All Customer                    "<<endl;
	

do{i++;
    //cout<<endl;
    cout<<"\t\t\t\t __________________________________________\n";
    cout<<"\t\t\t\t Enter Customer number: ";
	cin>>Cnumber[i];
	cout<<"\t\t\t\t Enter Customer name: ";
	cin>>name[i];
	cout<<"\t\t\t\t Enter Customer surname: ";
	cin>>surname[i];
	cout<<"\t\t\t\t Enter Customer ID number: ";
	cin>>nationalID[i];
	cout<<"\t\t\t\t Enter Customer phone number: ";
	cin>>Pnumber[i];
	cout<<"\t\t\t\t __________________________________________\n";
	cout<<"\t\t\t\t         1. withdrawal                 \n";
	cout<<"\t\t\t\t         2. Deposit                    \n";
	cout<<"\t\t\t\t ___________________________________________\n";
	cout<<"\t\t\t\t select number: ";cin>>select;
	
	switch(select){
		case 1: option[i] = " withdrawal";
		    break;
	    case 2: option[i] = " deposit";
	        break;
	 default :cout<<"invalid input \n"; 
	}
	cout<<"\t\t\t\t Enter Customer amount: ";
	cin>>amount[i];
	cout<<"\t\t\t\t __________________________________________\n";
	system("cls");
	
file<<"Customer Number: "<<Cnumber[i]<<endl
	<<"Name           : "<<name[i]<<endl
	<<"Surname        : "<<surname[i]<<endl
	<<"Customer ID    : "<<nationalID[i]<<endl
    <<"Number         : "<<Pnumber[i]<<endl
	<<"Transation     :"<<option[i]<<endl
	<<"Amount         : "<<amount[i]<<endl
    <<" "<<endl;

}while(Cnumber[i]!=00);	
				}
			}
			}; 

int main() {
	
	customer info;
	info.display();
	
	string text;
	ifstream file("customers.txt",ios::in);
	if(file.is_open()){
		while(getline(file,text)){
			cout<<text;
			}
		file.close(); 
	}
	return 0;
}


