#include<iostream>
using namespace std;

int main(){
	int units;
	
	cout<<"Enter electricity units: ";
	cin>>units;
	
	if(units>300){
		if(units>500){
			cout<<"High electricity usage";
		}else{
			cout<<"Moderate electricity usage";
		}
	}else{
		cout<<"Normal electricity usage";
	}
	
	return 0;
}