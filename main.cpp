//HW-4-CS1337-Nicole-Rodrigues
//The following program is designed to serve as a
// database for a no-kill animal shelter.
// The program will read data regarding the animals from a
// CSV text file, and will process the information.

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cctype>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;
vector<Cat> cats;
vector<Dog> dogs;
vector<Animal> otherAnimals;
//vector<string> dataFromFile;

//void splitStringFromFile
int numberOfCats = 0;
int numberOfDogs = 0;
int numberOfAnimals = 0;

int newCat(ifstream &inputFile) {
    Cat newCat;

    string Aname;
    string Aage;
    string Aweight;
    string Abreed;
    string Acolor;
    string Ahealth;

    getline(inputFile, Aname, ',');
    getline(inputFile, Aage, ',');
    getline(inputFile, Aweight, ',');
    getline(inputFile, Abreed, ',');
    getline(inputFile, Acolor, ',');
    getline(inputFile, Ahealth);

    newCat.setName(Aname);
    newCat.setAge(Aage);
    newCat.setWeight(Aweight);
    newCat.setBreed(Abreed);
    newCat.setColor(Acolor);
    newCat.setHealth(Ahealth);

    //  newCat.speakCat();
    // newCat.Describe();
    cats.push_back(newCat);
//    for(int i =0; i < cats.size(); i++){
//        cout << cats[i] << endl;
//    }
    return newCat.getNumberOfCats();
}

int newDog(ifstream &inputFile) {
    Dog newDog;

    string Aname;
    string Aage;
    string Aweight;
    string Abreed;
    string Acolor;
    string Ahealth;

    getline(inputFile, Aname, ',');
    getline(inputFile, Aage, ',');
    getline(inputFile, Aweight, ',');
    getline(inputFile, Abreed, ',');
    getline(inputFile, Acolor, ',');
    getline(inputFile, Ahealth);

    newDog.setName(Aname);
    newDog.setAge(Aage);
    newDog.setWeight(Aweight);
    newDog.setBreed(Abreed);
    newDog.setColor(Acolor);
    newDog.setHealth(Ahealth);

    dogs.push_back(newDog);
    return newDog.getNumberOfDogs();

}

int newAnimal(ifstream &inputFile) {
    Animal newAnimal;

    string Aname;
    string Aage;
    string Aweight;
    string Abreed;
    string Acolor;
    string Ahealth;

    getline(inputFile, Aname, ',');
    getline(inputFile, Aage, ',');
    getline(inputFile, Aweight, ',');
    getline(inputFile, Abreed, ',');
    getline(inputFile, Acolor, ',');
    getline(inputFile, Ahealth);

    newAnimal.setName(Aname);
    newAnimal.setAge(Aage);
    newAnimal.setWeight(Aweight);
    newAnimal.setBreed(Abreed);
    newAnimal.setColor(Acolor);
    newAnimal.setHealth(Ahealth);

    otherAnimals.push_back(newAnimal);
    return newAnimal.getNumberOfAnimals();
}

void printTheData(ostream &outputStream) {
    outputStream << "Report 1:" << endl;
    outputStream << "Number of Animals: " << numberOfAnimals << endl;
    outputStream << "Number of Cats: " << numberOfCats << endl;
    outputStream << "Number of Dogs: " << numberOfDogs << endl;
    outputStream << "Number of Other Animals: " << numberOfAnimals - numberOfCats - numberOfDogs << endl;
    outputStream << endl;
    outputStream << "Report 2: " << endl;
    for (unsigned i = 0; i < otherAnimals.size(); i++) {
        otherAnimals[i].speak(outputStream);
        otherAnimals[i].describe(outputStream);
    }
    outputStream << endl;
    outputStream << "Report 3:" << endl;
    outputStream << "Cats, Say Hello!" << endl;
    for (unsigned i = 0; i < cats.size(); i++) {
        cats[i].speakCat(outputStream);
        cats[i].Describe(outputStream);
    }
    outputStream << endl;
    outputStream << "Report 4:" << endl;
    outputStream << "Dogs, Say Hello!" << endl;
    for (unsigned i = 0; i < dogs.size(); i++) {
        dogs[i].dogSpeak(outputStream);
        dogs[i].describe(outputStream);
    }
}

int main() {
    string outputFile = "../data/animalShelterFile_save";
    ofstream outfile(outputFile);
    string animalType;
    string fileHeader;
    string fileName = "../data/OperationKindness.csv";
    ifstream inputFile;

    inputFile.open(fileName);
    if (!inputFile) {
        cout << "The file was not opened correctly. Please enter the name of the file you wish to open" << endl;
        cin >> fileName;
        inputFile.open(fileName);
        return -1;
    }
    while (!inputFile.eof()) {
        getline(inputFile, animalType, ',');
        for (int i = 0; i < animalType.length(); i++) {
            animalType[i] = toupper(animalType[i]);
        }
        // cout << "Animal Type: " << animalType << endl;
        if (animalType == "CAT") {
            numberOfCats = newCat(inputFile);
        } else if (animalType == "DOG") {
            numberOfDogs = newDog(inputFile);
        } else if (animalType == "ANIMALTYPE") {
            getline(inputFile, fileHeader);
        } else {
            numberOfAnimals = newAnimal(inputFile);
        }
    }
    printTheData(cout);
    printTheData(outfile);

    return 0;
}