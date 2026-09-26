#include<iostream>
using namespace std;

int main(){
	int salary,years;
	
	cout<<"Enter your salary: ";
	cin>>salary;
	
	cout<<"Enter years of service: ";
	cin>>years;
	
	if(salary>=50000){
		if(years>=5){
			cout<<"You get a bonus";
		}else{
			cout<<"No bonus due to less service";
		}
	}else{
		cout<<"Salary does not qualify for bonus";
	}
	
	return 0;
}