#include "Warrior.h"
#include "Monster.h"

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    HP = 150;
    MP = 30;
    power = 20;
    defence = 15;
    accuracy = 75;
    speed = 8;
}

void Warrior::attack() {
    cout << nickname << "이(가) 강력한 검 공격을 합니다!" << endl;
}

void Warrior::attack(Monster* monster) {
    int damage = power - monster->getDefence();
    if (damage <= 0) damage = 1;
    
    cout << "* " << monster->getName() << "에게 검으로 " << damage << "의 피해를 입혔다!" << endl;
    
    bool isAlive = monster->setHP(monster->getHP() - damage);
    
    if (isAlive) {
        cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
    } else {
        cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
        cout << nickname << "이(가) " << monster->getName() << "을(를) 물리쳤습니다!" << endl;
    }
}