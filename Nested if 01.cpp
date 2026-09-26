#include<iostream>

using namespace std;

int main(){
	int age,license;
	
	cout<<"Enter your Age: ";
	cin>>age;
	
	cout<<"Do you have a license?(enter 1 for yes and 0 for no): ";
	cin>>license;
	
	
	
	if(age>=18){
		
	  if(license==1){cout<<"You can drive";}else{
	  	cout<<"You need a valid license";
	  }
	} 
	  
    else {cout<<"you are not eligible to drive"<<endl;}
    return 0;
}