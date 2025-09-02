#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"
using namespace std;


AnimalsInZoo::AnimalsInZoo(int numAnimals, Animal animal) {
	numAnimals = numAnimals;
	animal = animal;
}


void AnimalsInZoo::setAnimal() {
	AnimalsInZoo::numAnimals = 1;
	
}
bool AnimalsInZoo::checkAnimal() {
	if ((AnimalsInZoo::numAnimals = 1)) {
		return true;
	} else {
		return false;
	}
}
bool AnimalsInZoo::displayZoo() {
	cout << "There is " << numAnimals << " in the zoo. Which is";
	if (checkAnimal()) {
		animal.display();
		return true;
	} else {
		return false;
	}
}



