#include<iostream>

using namespace std;

int main(){
	int choice;
	
	cout<<"1. Single Room"<<endl;
	cout<<"2. Double Room"<<endl;
	cout<<"3. Deluxe Room"<<endl;
	cout<<"4. Family Room"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Single Room selected";
			break;
		case 2:
			cout<<"Double Room selected";
			break;
		case 3:
			cout<<"Deluxe Room selected";
			break;
		case 4:
			cout<<"Family Room selected";
			break;
		default:
			cout<<"Invalid room choice";
			break;
	}
	
	return 0;
}