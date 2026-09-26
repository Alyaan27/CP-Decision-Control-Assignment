#include<iostream>

using namespace std;

int main(){
	int choice;
	float amount;
	
	cout<<"1. Pakistani Rupees"<<endl;
	cout<<"2. US Dollars"<<endl;
	cout<<"3. Saudi Riyal"<<endl;
	cout<<"4. UAE Dirham"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	cout<<"Enter amount: ";
	cin>>amount;
	
	switch(choice){
		case 1:
			cout<<"Currency: Pakistani Rupees"<<endl;
			cout<<"Amount: "<<amount<<" PKR";
			break;
		case 2:
			cout<<"Currency: US Dollars"<<endl;
			cout<<"Amount: "<<amount<<" USD";
			break;
		case 3:
			cout<<"Currency: Saudi Riyal"<<endl;
			cout<<"Amount: "<<amount<<" SAR";
			break;
		case 4:
			cout<<"Currency: UAE Dirham"<<endl;
			cout<<"Amount: "<<amount<<" AED";
			break;
		default:
			cout<<"Invalid currency choice";
			break;
	}
	
	return 0;
}
