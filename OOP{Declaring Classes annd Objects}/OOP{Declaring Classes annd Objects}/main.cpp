//
//  main.cpp
//  OOP{Declaring Classes annd Objects}
//
//  Created by Amartya Vibhu on 30/03/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
    // Attributes
    string name;
    int age;
    
    // Methods
    void talk(string);
    bool is_dead();
    
};

int main() {
    Player frank;
    Player jack;
    
    Player players[] {frank,jack};
    
    vector<Player>player_vec{frank};
    player_vec.push_back(jack);
    
    Player *enemy{nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}
