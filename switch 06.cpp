#include<iostream>

using namespace std;

int main(){
	char grade;
	
	cout<<"Enter your grade: ";
	cin>>grade;
	
	switch(grade){
		case 'A':
			cout<<"Excellent";
			break;
		case 'B':
			cout<<"Good";
			break;
		case 'C':
			cout<<"Average";
			break;
		case 'D':
			cout<<"Pass";
			break;
		case 'F':
			cout<<"Fail";
			break;
		default:
			cout<<"Invalid grade";
			break;
	}
	
	return 0;
}