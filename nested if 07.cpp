#include<iostream>
using namespace std;

int main(){
	int amount,member;
	
	cout<<"Enter purchase amount: ";
	cin>>amount;
	
	cout<<"Are you a member? (1 for yes, 0 for no): ";
	cin>>member;
	
	if(amount>=10000){
		if(member==1){
			cout<<"You get 20% discount";
		}else{
			cout<<"You get 10% discount";
		}
	}else{
		cout<<"No discount";
	}
	
	return 0;
}