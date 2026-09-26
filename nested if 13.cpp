#include<iostream>
using namespace std;

int main(){
	int balance;
	
	cout<<"Enter your balance: ";
	cin>>balance;
	
	if(balance>=500){
		if(balance>=1000){
			cout<<"You can buy the premium package";
		}else{
			cout<<"You can buy the basic package";
		}
	}else{
		cout<<"Insufficient balance";
	}
	
	return 0;
}