//
//  main.cpp
//  Implementing Member Method--1
//
//  Created by Amartya Vibhu on 30/03/22.
//

#include <iostream>
#include <string>

using namespace std;

class Account{
private:
    string name;
    double balance;
    
public:
    //Methods declared inline
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}
    
    //Methods will be declared outside the class
    void set_name(string n);
    string get_name();
    
    bool deposite(double amount);
    bool withdraw(double amount);
    
};

void Account::set_name(string n){
    name = n;
};

string Account::get_name(){
    return name;
};

bool Account::deposite(double amount){
    //if verify ammount
    balance += amount;
    return true;
};
bool Account::withdraw(double amount){
    if(balance-amount >= 0){
        balance -= amount;
        return true;
    }
    else{
        return false;}
};


int main() {
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposite(200.0))
        cout<<"Ok deposite"<<endl;
    else
        cout<<"Deposite not Allowed"<<endl;
    if(frank_account.withdraw(500.0))
        cout<<"Withdrawl OK"<<endl;
    else
        cout<<"Not sufficient Fund"<<endl;
    if(frank_account.withdraw(1500.0))
        cout<<"Withdrawl OK"<<endl;
    else
        cout<<"Not sufficient Fund"<<endl;
    
    return 0;
    
    
}
