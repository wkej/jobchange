#pragma once
#include <string>
using namespace std;

class Player; // 전방 선언

class Monster {
public:
    Monster(string name);
    void attack(Player* player);
    
    string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();
    
    void setName(string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name;
    int HP;
    int power;
    int defence;
    int speed;
};