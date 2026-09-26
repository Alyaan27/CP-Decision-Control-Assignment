#include<iostream>

using namespace std;

int main(){
	char color;
	
	cout<<"Enter traffic light color (R,Y,G): ";
	cin>>color;
	
	switch(color){
		case 'R':
			cout<<"Stop";
			break;
		case 'Y':
			cout<<"Get Ready";
			break;
		case 'G':
			cout<<"Go";
			break;
		default:
			cout<<"Invalid color";
			break;
	}
		
	return 0;
}