//
// Created by Nicole Rodrigues on 5/3/19.
//

#include "Dog.h"

int Dog::nbrOfDogs = 0;

const void Dog::dogSpeak(ostream &outputStream) {
    outputStream << getName() << " says \"Woof, Woof\"." << endl;
}

void Dog::setBreed(string &dBreed) {
    breed = dBreed;
}

string const Dog::getBreed() {
    return breed;
}

int Dog::getNumberOfDogs() {
    return nbrOfDogs;
}

int Dog::getDogNumber() {
    return myDogNumber;
}

string Dog::getDogType() {
    return type;
}

void const Dog::describe(ostream &outputStream) {
    outputStream << "Hello, my name is " << getName() << " and I am dog number " << getDogNumber() << "!" << endl
                 << "I am " << getAge() << " year(s) old." << endl <<
                 "I weigh " << getWeight() << " pound(s)." << endl <<
                 "My color is " << getColor() << "." << endl <<
                 "My breed is " << getBreed() << "." << endl <<
                 "My health status is " << getHealth() << endl << endl;

}

Dog::Dog() {
    // cout << "Creating a new dog." << endl;
    nbrOfDogs++;
    myDogNumber = nbrOfDogs;
    breed = "Unknown";

}