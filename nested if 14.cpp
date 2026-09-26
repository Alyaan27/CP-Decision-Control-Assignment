#include<iostream>
using namespace std;

int main(){
	int age;
	
	cout<<"Enter your age: ";
	cin>>age;
	
	if(age>=18){
		if(age>=60){
			cout<<"You get a senior citizen discount";
		}else{
			cout<<"Regular ticket price";
		}
	}else{
		cout<<"You get a child ticket";
	}
	
	return 0;