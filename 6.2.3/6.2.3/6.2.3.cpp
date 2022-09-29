#include <iostream>
#include <ctime>
#include <cmath>
#include <vector> 
using namespace std;

class Characteristics {
protected:
    int health = 0;
    int energy = 0;
    string name = "";
    int level = 0;
public:
    Characteristics(int health, int energy, string name, int level) {}
    void setHealth(int health) {
        this->health = health;
    }
    int getHealth() {
        return health;
    }
    void setEnergy(int energy) {
        this->energy = energy;
    }
    int getEnergy() {
        return energy;
    }void setName(int name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setLevel(int level) {
        this->level = level;
    }
    int getLevel() {
        return level;
    }
};
class Player : public Characteristics {
private:
    int power = 0;
    int agility = 0;
    int endurance = 0;
    int experience = 0;
public:
    Player(int health, int energy, int level, int power, int agility, int endurance, int experience, string name) :Characteristics(health, energy, name, level)
    {}
    void setPower(int power) {
        this->power = power;
    }
    int getPower() {
        return power;
    }void setAgility(int agility) {
        this->agility = agility;
    }int getAgility() {
        return agility;
    }void setEndurance(int endurance) {
        this->endurance = endurance;
    }int getEndurance() {
        return endurance;
    }void setExperience(int experience) {
        this->experience = experience;
    }int getExperience() {
        return experience;
    }

};
class Monster : public Characteristics {

private:

    int damage = 0;
    int shield = 0;
    int playerExperience = 0;
public:
    Monster(string name, int health, int energy, int damage, int shield, int playerExperience, int level) : Characteristics(health, energy, name, level) {

    }
    void setDamage(int damage) {
        this->damage = damage;
    }
    int getDamage() {
        return damage;
    }void setShield(int shield) {
        this->shield = shield;
    }
    int getShield() {
        return shield;
    }
    void setPlayerExperience(int playerExperience) {
        this->playerExperience = playerExperience;
    }
    int getPlayerExperience() {
        return playerExperience;
    }

};
class Engine {
private:

    int getCharacteristic(int characteristic, int level) {
        level += rand() % 2 + 1;
        int min = 0;
        int max = 2;
        for (int i = 0; i < level; i++) {
            min += 2;
            max += 2;
            characteristic += randomRes(min, max);
        }
    }

    int randomRes(int min, int max) {
        if (min > max) {
            int c = min;
            min = max;
            max = c;
        }

        return min + rand() % (max - min + 1);
    }



public:
    Engine() {};



    Player playerGeneration(string name, int ch, int power, int endurance, int agility, int health, int energy, int experience, int level) {

        int choice = 0;
        cout << "Name:";
        cin >> name;
        cout << endl << "Your role(barbarian - 1, tank - 2, robber - 3): ";
        cin >> choice;
        if (choice == 1) {
            power += 5;
        }
        else if (choice == 2) {
            endurance += 5;
        }
        else {
            agility += 5;
        }

        getCharacteristic(health, level);
        getCharacteristic(energy, level);
        getCharacteristic(power, level);
        getCharacteristic(endurance, level);
        getCharacteristic(agility, level);
        Player player(health, energy, level, power, agility, endurance, experience, name);

        return player;


    }
    Monster monsterGeneration(string name, int level, int endurance, int damage, int health, int energy, int playerExperience, int shield) {

        int initial = 3;
        string names[10] = { "Goblin","Vampire","Zombie", "Hydra","Chimera","Dark elf","Dragon","Demon","Werewolf", "Witch" };
        name = names[rand() % 10];

        getCharacteristic(endurance, level);
        getCharacteristic(damage, level);
        getCharacteristic(health, level);
        getCharacteristic(energy, level);
        getCharacteristic(playerExperience, level);
        Monster monster = Monster(name,health, energy,damage,  shield, playerExperience, level);
        Monster monster(name, health, energy, damage, shield, playerExperience, level);
        return ;


    }


};

class Characteristics {
protected:
    int health = 0;
    int healthMax = 0;
    int energy = 0;
    string name = "";
    int level = 0;
public:
    Characteristics(int health, int energy, string name, int level)
    {
        this->healthMax = health;
        this->health = health;
        this->energy = energy;
        this->name = name;
        this->level = level;
    }

    void setHealth(int health) {
        if (health > this->healthMax) {
            this->health = this->healthMax;
        }
        else {
            this->health = health;
        }
    }
    int getHealth() {
        return health;
    }
    void setEnergy(int energy) {
        this->energy = energy;
    }
    int getEnergy() {
        return energy;
    }void setName(int name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setLevel(int level) {
        this->level = level;
    }
    int getLevel() {
        return level;
    }
};
class Player : public Characteristics {
private:
    int power = 0;
    int agility = 0;
    int endurance = 0;
    int experience = 0;
public:
    Player(int health, int energy, int level, int power, int agility, int endurance, int experience, string name) :Characteristics(health, energy, name, level)
    {}
    void setPower(int power) {
        this->power = power;
    }
    int getPower() {
        return power;
    }void setAgility(int agility) {
        this->agility = agility;
    }int getAgility() {
        return agility;
    }void setEndurance(int endurance) {
        this->endurance = endurance;
    }int getEndurance() {
        return endurance;
    }void setExperience(int experience) {
        this->experience = experience;
    }int getExperience() {
        return experience;
    }

};
class Monster : public Characteristics {

private:

    int damage = 0;
    int shield = 0;
    int playerExperience = 0;
public:
    Monster(string name, int health, int energy, int damage, int shield, int playerExperience, int level) : Characteristics(health, energy, name, level) {
        this->damage = damage;
        this->shield = shield;
        this->playerExperience = playerExperience;
    }
    void setDamage(int damage) {
        this->damage = damage;
    }
    int getDamage() {
        return damage;
    }void setShield(int shield) {
        this->shield = shield;
    }
    int getShield() {
        return shield;
    }
    void setPlayerExperience(int playerExperience) {
        this->playerExperience = playerExperience;
    }
    int getPlayerExperience() {
        return playerExperience;
    }

};

class NameHelper {
private:
    string monsterNames[10] = { "Goblin","Vampire","Zombie", "Hydra","Chimera","Dark elf","Dragon","Demon","Werewolf", "Witch" };
public:
    string getMonsterName() {
        return this->monsterNames[rand() % 10];
    }
};

class Engine {
private:
    int getCharacteristic(int characteristic, int level, int shift) {

        int min = 1;
        int max = 2;
        for (int i = 0; i < level; i++) {
            min += shift;
            max += shift;
            characteristic += randomRes(min, max);
        }

        return characteristic;
    }

    int randomRes(int min, int max) {
        if (min > max) {
            int c = min;
            min = max;
            max = c;
        }

        return min + rand() % (max - min + 1);
    }



public:
    Engine() {};



    Player* playerGeneration(string name) {
        int power = 20, endurance = 20, agility = 20;
        int choice = 0;

        cout << "Name:";
        cin >> name;
        cout << endl << "Your role(barbarian - 1, tank - 2, robber - 3): ";
        cin >> choice;
        if (choice == 1) {
            power += 5;
        }
        else if (choice == 2) {
            endurance += 5;
        }
        else {
            agility += 5;
        }

        return new Player(100, 50, 1, power, agility, endurance, 0, name);
    }

    Monster* monsterGeneration(string name, int level) {

        level += rand() % 2 + 1;

        int health = getCharacteristic(0, level, 50),
            energy = getCharacteristic(0, level, 20),
            damage = getCharacteristic(0, level, 5),
            shield = getCharacteristic(0, level, 5),
            playerExperience = getCharacteristic(0, level, 100);
        Monster monster = Monster(name,health, energy,damage,  shield, playerExperience, level);
        Monster* monster = new Monster(
            name,
            health,
            energy,
            damage,
            shield,
            playerExperience,
            level);

        return ;
    }
};


int main() {
    Engine* engine = new Engine();
    NameHelper* nameHelper = new NameHelper();

    Monster* mob = engine->monsterGeneration(nameHelper->getMonsterName(), 1);

    return 1;
}
