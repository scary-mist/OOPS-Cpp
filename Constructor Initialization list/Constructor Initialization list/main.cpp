//
//  main.cpp
//  Constructor Initialization list
//
//  Created by Amartya Vibhu on 04/08/22.
//

#include <iostream>
#include<string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player() : name{"None"},health{0},xp{0}{
    }
    Player(std::string name_val) : name{name_val},health{0},xp{0}{
    }
    Player(std::string name_val,int health_val, int xp_val) : name{name_val},health{health_val},xp{xp_val}{
        
    }

    };
int main(){
    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain",100,3};
    return 0;
}
