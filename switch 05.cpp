#include<iostream>

using namespace std;

int main(){
	int choice;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Burger";
			break;
		case 2:
			cout<<"Pizza";
			break;
		case 3:
			cout<<"Biryani";
			break;
		case 4:
			cout<<"Sandwich";
			break;
		default:
			cout<<"Invalid choice";
			break;
	}
	
	return 0;
}