#pragma once
#include <string>
using namespace std;

class Monster; // 전방 선언

class Player {
public:
    Player(string nickname);

    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();
		
		// getter 함수
    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();
		
		// setter 함수
    void setNickname(string nickname);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);
    
    // 생존 여부 확인 함수
    bool isAlive();

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};