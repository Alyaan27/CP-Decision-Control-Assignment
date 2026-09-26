
#include<iostream>
using namespace std;

int main(){
	string username;
	int password;

	cout<<"Enter username: ";
	cin>>username;

	cout<<"Enter password: ";
	cin>>password;

	if(username=="admin"){
		if(password==1234){
			cout<<"Login successful";
		}else{
			cout<<"Wrong password";
		}
	}else{
		cout<<"Wrong username";
	}

	return 0;
}

