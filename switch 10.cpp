#include<iostream>

using namespace std;

int main(){
	int choice;
	
	cout<<"1. Check Balance"<<endl;
	cout<<"2. Withdraw Money"<<endl;
	cout<<"3. Deposit Money"<<endl;
	cout<<"4. Exit"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Check Balance";
			break;
		case 2:
			cout<<"Withdraw Money";
			break;
		case 3:
			cout<<"Deposit Money";
			break;
		case 4:
			cout<<"Exit";
			break;
		default:
			cout<<"Invalid choice";
			break;
	}
	
	return 0;
}