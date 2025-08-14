#include "Thief.h"
#include "Monster.h"

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    HP = 90;
    MP = 60;
    power = 15;
    defence = 8;
    accuracy = 95;
    speed = 20;
}

void Thief::attack() {
    cout << nickname << "이(가) 5회 연속 단검 공격을 합니다!" << endl;
}

void Thief::attack(Monster* monster) {
    int totalDamage = power - monster->getDefence();
    if (totalDamage <= 0) totalDamage = 1;
    
    int singleDamage = totalDamage / 5;
    if (singleDamage <= 0) singleDamage = 1;
    
    for (int i = 0; i < 5; i++) {
        cout << "* " << monster->getName() << "에게 단검으로 " << singleDamage << "의 피해를 입혔다!" << endl;
    }
    
    bool isAlive = monster->setHP(monster->getHP() - (singleDamage * 5));
    
    if (isAlive) {
        cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
    } else {
        cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
        cout << nickname << "이(가) " << monster->getName() << "을(를) 물리쳤습니다!" << endl;
    }
}