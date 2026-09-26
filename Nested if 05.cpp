
#include<iostream>
using namespace std;

int main(){
    int balance,amount;

    cout<<"Enter your balance: ";
    cin>>balance;

    cout<<"Enter withdrawal amount: ";
    cin>>amount;

    if(amount<=balance){
        if(amount>0){
            cout<<"Withdrawal successful";
        }else{
            cout<<"Invalid withdrawal amount";
        }
    }else{
        cout<<"Insufficient balance";
    }

    return 0;
}
