#include<iostream>

using namespace std;

int main(){
	int choice;
	
	cout<<"1. Mathematics"<<endl;
	cout<<"2. English"<<endl;
	cout<<"3. Computer Science"<<endl;
	cout<<"4. Physics"<<endl;
	cout<<"5. Chemistry"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Mathematics selected";
			break;
		case 2:
			cout<<"English selected";
			break;
		case 3:
			cout<<"Computer Science selected";
			break;
		case 4:
			cout<<"Physics selected";
			break;
		case 5:
			cout<<"Chemistry selected";
			break;
		default:
			cout<<"Invalid subject choice";
			break;
	}
	
	return 0;
}