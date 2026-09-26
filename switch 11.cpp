#include<iostream>

using namespace std;

int main(){
	int choice;
	float temp,result;
	
	cout<<"1. Celsius to Fahrenheit"<<endl;
	cout<<"2. Fahrenheit to Celsius"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	cout<<"Enter temperature: ";
	cin>>temp;
	
	switch(choice){
		case 1:
			result=(temp*9/5)+32;
			cout<<"Temperature = "<<result<<" Fahrenheit";
			break;
		case 2:
			result=(temp-32)*5/9;
			cout<<"Temperature = "<<result<<" Celsius";
			break;
		default:
			cout<<"Invalid choice";
			break;
	}
	
	return 0;
}