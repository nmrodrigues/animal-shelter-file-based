//
// Created by Nicole Rodrigues on 5/3/19.
//

#ifndef ANIMALSHELTER_DOG_H
#define ANIMALSHELTER_DOG_H

#include "Animal.h"
#include <fstream>

class Dog : public Animal {
private:
    static int nbrOfDogs;
    string breed;
    string type = "dog";
    int myDogNumber;
public:
    Dog();

    void setBreed(string &dBreed);

    string const getBreed();

    const void dogSpeak(ostream &outputStream);

    int getNumberOfDogs();

    void const describe(ostream &outputStream);

    string getDogType();

    int getDogNumber();
};

#endif //ANIMALSHELTER_DOG_H
