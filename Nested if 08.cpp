#include<iostream>
using namespace std;

int main(){
	int attendance,fee;
	
	cout<<"Enter your attendance percentage: ";
	cin>>attendance;
	
	cout<<"Have you paid the exam fee? (1 for yes, 0 for no): ";
	cin>>fee;
	
	if(attendance>=75){
		if(fee==1){
			cout<<"You are eligible for the exam";
		}else{
			cout<<"Please pay your exam fee";
		}
	}else{
		cout<<"You are not eligible due to low attendance";
	}
	
	return 0;
}