//
//  main.cpp
//  Accessing Class Objects
//
//  Created by Amartya Vibhu on 30/03/22.


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
    // Attributes
public:
    string name;
    int health;
    int xp;
    
    // Methods
    void talk(string text_to_speak){cout<<name<<" Says "<<text_to_speak<<endl;};
    
    bool is_dead();
    
};
class Account{
public:
    
    string name;
    double balance;
    
    void deposit(double bal){balance += bal;cout<<"In deposit: "<<balance<<endl;}
    void withdraw(double bal){balance -= bal;cout<<"In Withdrawal: "<<balance<<endl;}
    
};

int main() {
    
    Account frank_account;
    frank_account.name = "Frank's Account";
    frank_account.balance = 1000.0;
    frank_account.deposit(1000);
    frank_account.withdraw(500);
    
    
    
    
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 10;
    frank.talk("Hi there!");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 10;
    enemy->talk("I will destroy you");
    
    return 0;
    
    
    
    

    
    
}

