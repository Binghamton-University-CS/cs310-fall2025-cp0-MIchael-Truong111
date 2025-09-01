#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animals.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(int numAnimals, Animal animal) {
	typeAnimal = animal;
	numAnimals = numAnimals;
}


void setAnimal(Animal animal) {
	animal.numAnimals = 1;
}
bool checkAnimals(Animal animal) {
	if (animal.numAnimals = 1) {
		return true;
	} else {
		return false;
void AnimalsInZoo::display() {
	if (checkAnimals(Animal animal)) {
		cout << numAnimals << Animal::display();
	}
}


