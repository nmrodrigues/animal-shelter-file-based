//
// Created by Nicole Rodrigues on 5/3/19.
//

#include "Cat.h"

int Cat::nbrOfCats = 0;

void const Cat::speakCat(ostream &outputStream) {
    outputStream << "Meow!" << endl;
}

string const Cat::getBreed() {
    return breed;
}

void Cat::setBreed(const string Cbreed) {
    breed = Cbreed;
}

int Cat::getCatNumber() {
    return myCatNumber;
}

void const Cat::Describe(ostream &outputStream) {
    outputStream << "Hello, my name is " << getName() << " and I am cat number " << getCatNumber() << "!" << endl
                 << "I am " << getAge() << " year(s) old." << endl <<
                 "I weigh " << getWeight() << "pound(s)." << endl <<
                 "My color is " << getColor() << "." << endl <<
                 "My breed is " << getBreed() << "." << endl <<
                 "My health status is " << getHealth() << endl << endl;

}

int Cat::getNumberOfCats() {
    return nbrOfCats;
}

Cat::Cat() {
    type = "cat";
    breed = " ";
    nbrOfCats++;
    myCatNumber = nbrOfCats;

}




