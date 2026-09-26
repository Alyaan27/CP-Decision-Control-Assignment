#include<iostream>

using namespace std;

int main(){
	char letter;
	
	cout<<"Enter a letter: ";
	cin>>letter;
	
	switch(letter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"It is a vowel";
			break;
		default:
			cout<<"It is not a vowel";
			break;
	}
	
	return 0;
}