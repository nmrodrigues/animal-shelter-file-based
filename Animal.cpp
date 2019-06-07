//
// Created by Nicole Rodrigues on 5/3/19.
//

#include "Animal.h"

int Animal::nbrOfAnimals = 0;

const void Animal::speak(ostream &outputStream) {
    outputStream << getName() << " says: (slight breathing noise)" << endl;
}

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

string Animal::getAge() const {
    return age;
}

void Animal::setAge(string age) {
    Animal::age = age;
}

string Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(string weight) {
    Animal::weight = weight;
}

const string &Animal::getColor() const {
    return color;
}

void Animal::setColor(const string &color) {
    Animal::color = color;
}

const string &Animal::getHealth() const {
    return health;
}

void Animal::setHealth(const string &health) {
    Animal::health = health;
}

int Animal::getNumberOfAnimals() {
    return nbrOfAnimals;
}

int Animal::getAnimalNumber() {
    return myAnimalNumber;
}

void const Animal::describe(ostream &outputStream) {
    outputStream << "Hello, my name is " << getName() << " and I am animal number " << getAnimalNumber() << "!" << endl
                 << "I am " << getAge() << " year(s) old." << endl <<
                 "I weigh " << getWeight() << " pound(s)." << endl <<
                 "My color is " << getColor() << "." << endl <<
                 "My breed is " << getBreed() << "." << endl <<
                 "My health status is " << getHealth() << "." << endl;
}

Animal::Animal() {
    name = "Unknown";
    age = "Unknown";
    weight = "Unknown";
    breed = "Unknown";
    color = "Unknown";
    health = "Unknown";
    //  cout << "I am creating a new animal." << endl;
    nbrOfAnimals++;
    myAnimalNumber = nbrOfAnimals;
}

void Animal::setBreed(const string &Abreed) {
    breed = Abreed;
}

string Animal::getBreed() {
    return breed;
}
