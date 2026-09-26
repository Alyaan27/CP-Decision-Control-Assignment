#include<iostream>
using namespace std;

int main(){
	int age,registered;
	
	cout<<"Enter your age: ";
	cin>>age;
	
	cout<<"Are you registered to vote? (1 for yes, 0 for no): ";
	cin>>registered;
	
	if(age>=18){
		if(registered==1){
			cout<<"You can vote";
		}else{
			cout<<"You need to register first";
		}
	}else{
		cout<<"You are not eligible to vote";
	}
	
	return 0;
}