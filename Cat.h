//
// Created by Nicole Rodrigues on 5/3/19.
//

#ifndef ANIMALSHELTER_CAT_H
#define ANIMALSHELTER_CAT_H

#include "Animal.h"
#include <fstream>


class Cat : public Animal {
private:
    string type = "Cat";
    string breed;
    static int nbrOfCats;
    int myCatNumber;
public:
    Cat();

    string getType() {
        return type;
    }

    void setBreed(string Cbreed);

    int getCatNumber();

    string const getBreed();

    void const Describe(ostream &outputStream);

    void const speakCat(ostream &outputStream);

    int getNumberOfCats();
};

#endif //ANIMALSHELTER_CAT_H
