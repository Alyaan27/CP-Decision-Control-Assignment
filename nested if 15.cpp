#include<iostream>
using namespace std;

int main(){
	int amount;
	
	cout<<"Enter your order amount: ";
	cin>>amount;
	
	if(amount>=1000){
		if(amount>=2000){
			cout<<"You get free delivery and a free drink";
		}else{
			cout<<"You get free delivery";
		}
	}else{
		cout<<"Delivery charges apply";
	}
	
	return 0;
}