#include<iostream>
using namespace std;

int main(){
	int temp;
	
	cout<<"Enter temperature: ";
	cin>>temp;
	
	if(temp>30){
		if(temp>40){
			cout<<"Very Hot";
		}else{
			cout<<"Hot";
		}
	}else{
		cout<<"Normal Temperature";
	}
	
	return 0;
}