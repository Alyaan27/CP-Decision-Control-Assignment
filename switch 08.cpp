#include<iostream>

using namespace std;

int main(){
	int choice;
	float radius,length,width,side,base,height;
	
	cout<<"1. Circle"<<endl;
	cout<<"2. Rectangle"<<endl;
	cout<<"3. Square"<<endl;
	cout<<"4. Triangle"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Enter radius: ";
			cin>>radius;
			cout<<"Area = "<<3.14*radius*radius;
			break;
			
		case 2:
			cout<<"Enter length: ";
			cin>>length;
			cout<<"Enter width: ";
			cin>>width;
			cout<<"Area = "<<length*width;
			break;
			
		case 3:
			cout<<"Enter side: ";
			cin>>side;
			cout<<"Area = "<<side*side;
			break;
			
		case 4:
			cout<<"Enter base: ";
			cin>>base;
			cout<<"Enter height: ";
			cin>>height;
			cout<<"Area = "<<0.5*base*height;
			break;
			
		default:
			cout<<"Invalid choice";
			break;
	}
	
	return 0;
}