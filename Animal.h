//
// Created by Nicole Rodrigues on 5/3/19.
//

#ifndef ANIMALSHELTER_ANIMAL_H
#define ANIMALSHELTER_ANIMAL_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Animal {
private:
    static int nbrOfAnimals;
    string name;
    string age;
    string weight;
    string breed;
    string color;
    string health;
    int myAnimalNumber;
public:
    Animal();

    const void speak(ostream &outputStream);

    const string &getName() const;

    void setName(const string &name);

    string getAge() const;

    void setAge(string age);

    string getWeight() const;

    void setWeight(string weight);

    const string &getColor() const;

    void setColor(const string &color);

    const string &getHealth() const;

    void setHealth(const string &health);

    int getNumberOfAnimals();

    int getAnimalNumber();

    void const describe(ostream &outputStream);

    void setBreed(const string &Abreed);

    string getBreed();
};

#endif //ANIMALSHELTER_ANIMAL_H
