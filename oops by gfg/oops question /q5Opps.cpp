// Write a C++ program to implement a class called BankAccount 
// that has private member variables for account number and
//  balance. Include member functions to deposit and
//  withdraw money from the account.


//account number, balance
//deposite, withdraw

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// This program demonstrates how to manage a bank account's 
// balance with basic deposit and withdrawal operations, ensuring 
// that operations are only performed with valid amounts.

class BankAccount{
    private:
    string AccountNumber;
    double Balance;
    public:
    BankAccount(const string& AccountNumber,double Balance){
        this->AccountNumber = AccountNumber;
        this->Balance = Balance;
    }
    void Deposite(int amount){
        if(amount>0){
            Balance+=amount;
            cout<<"Depostie amount "<<amount<<" new balance "<<Balance<<endl;
        }else{
            cout<<"Invalid deposite amount "<<endl;
        }
    }
    void WithDraw(double amount){
        if(amount>0 && amount<=Balance){
            Balance-=amount;
            cout<<" WithDraw amount "<<amount<<" new Balance "<<Balance<<endl;
        }else if(amount>Balance){
            cout<<" Insuffient balance account"<<endl;
        }else{
            cout<<" Invalid withdrawl amount"<<endl;
        }
    }
    const string getAccountNumber() const{
        return AccountNumber;
    }
    double getBalance() const{
        return Balance;
    }
};

int main(){
    BankAccount b1("123ABC123",100);
    cout<<b1.getAccountNumber()<<endl;
    cout<<b1.getBalance()<<endl;
    b1.Deposite(100);
    cout<<b1.getAccountNumber()<<endl;
    cout<<b1.getBalance()<<endl;
    b1.WithDraw(200);
    cout<<b1.getAccountNumber()<<endl;
    cout<<b1.getBalance()<<endl;
    b1.WithDraw(200);
    cout<<b1.getAccountNumber()<<endl;
    cout<<b1.getBalance()<<endl;
    return 0;
}