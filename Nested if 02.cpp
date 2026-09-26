#include<iostream>

using namespace std;

int main (){
	int marks;
	
	cout<<"Enter Marks: ";
	cin>>marks;
	
	if(marks>=50){
		if(marks>=80){
			cout<<"Grade A";
		}else if(marks>=70){
			cout<<"Grade B";
		}else{
			cout<<"Grade C";
		}
	}else if (marks<50){
		cout<<"Failed";
	}
	return 0 ;
}