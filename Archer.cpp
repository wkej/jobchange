#include "Archer.h"
#include "Monster.h"

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    HP = 100;
    MP = 70;
    power = 18;
    defence = 10;
    accuracy = 90;
    speed = 15;
}

void Archer::attack() {
    cout << nickname << "이(가) 3회 연속 화살 공격을 합니다!" << endl;
}

void Archer::attack(Monster* monster) {
    int totalDamage = power - monster->getDefence();
    if (totalDamage <= 0) totalDamage = 1;
    
    int singleDamage = totalDamage / 3;
    if (singleDamage <= 0) singleDamage = 1;
    
    for (int i = 0; i < 3; i++) {
        cout << "* " << monster->getName() << "에게 화살로 " << singleDamage << "의 피해를 입혔다!" << endl;
    }
    
    bool isAlive = monster->setHP(monster->getHP() - (singleDamage * 3));
    
    if (isAlive) {
        cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
    } else {
        cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
        cout << nickname << "이(가) " << monster->getName() << "을(를) 물리쳤습니다!" << endl;
    }
}