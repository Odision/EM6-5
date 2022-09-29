#include <iostream>
#include <ctime>
#include <cmath>
#include <vector> 
using namespace std;
class LivingBeing {
public:
    void breath();
    void reproduction();
};
class Bacteria : LivingBeing {
protected:
    string shape = "";
public:
    Bacteria(string shape) {
        this->shape = shape;
    }
};
class Bacilli : Bacteria {
    string effectOnHuman = "";
    Bacilli(string effectOnHuman, string shape) : Bacteria(shape) {
        this->effectOnHuman = effectOnHuman;
    }
};
class Animal : LivingBeing {
private:
    float size = 0;
    vector <string> habitant;

public:
    Animal(float size, string habitant) {

        this->size = size;
        this->habitant.push_back(habitant);

    }
};
class Vertebrates : public Animal {
private:
    float temperature = 0;

public:
    Vertebrates(float temperature, float size, string habitant) : Animal(size, habitant) {

        this->temperature = temperature;


    }
    void walk() {
        cout << "*walking" << endl;
    };
};
class Fish : public Vertebrates {
public:
    Fish(float temperature, float size, string habitant) :Vertebrates(temperature, size, habitant) {

    }
    void swim() {
        cout << "*swimming" << endl;
    }

};
class Mammals : public Vertebrates {
private:
    string vestiture = "";

public:
    Mammals(float temperature, string vestiture, float size, string habitant) : Vertebrates(temperature, size, habitant) {
        this->vestiture = vestiture;
        void breastfeed();
    }
};
class Pet {
protected:
    string name = "";
    string breed = "";
public:
    Pet(string name, string breed) {
        this->name = name;
        this->breed = breed;
    }
};


class Dog : public Mammals, Pet {
    string barkSound = "";
public:
    Dog(string barkSound, float temperature, string vestiture, float size, string habitant) :Mammals(temperature, vestiture, size, habitant), Pet(name, breed) {
        this->barkSound = barkSound;
    }
    void bark() {
        cout << barkSound << "!" << endl;
    }
};
class Feline : public Mammals {
protected:
    int whiskersLength = 0;
public:
    Feline(int whiskersLength, float temperature, string vestiture, float size, string habitant) : Mammals(temperature, vestiture, size, habitant) {
        this->whiskersLength = whiskersLength;
    }
    void meow() {
        cout << "Meow!" << endl;
    }
};
class Cat : public Feline, Pet {
public:
    Cat(int whiskersLength, float temperature, string vestiture, float size, string habitant, string name, string breed) : Feline(whiskersLength, temperature, vestiture, size, habitant), Pet(name, breed) {}
};
