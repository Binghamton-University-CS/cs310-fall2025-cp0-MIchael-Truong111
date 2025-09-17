#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"
using namespace std;


AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
	capacity = 1;
	aarr = new Animal[capacity];
	cout << "check:" << capacity << endl;

}

//AnimalsInZoo() : numAnimals(0), capacity(1), aarr(nullptr) {};
bool AnimalsInZoo::store(Animal &another_animal) {
	unsigned int i;
	unsigned int tmpcapacity;
	numAnimals++;
	int place = numAnimals;
	Animal *tmp = new Animal[capacity * 2];
	if (numAnimals != capacity) {
		aarr[place] = another_animal;
	} else {
		for (i = 0; i < capacity; i++) {
			tmp[i] = aarr[i];
			tmp[i + 1] = another_animal;
		}
		delete[] aarr;
		aarr = tmp;
		tmpcapacity = 2 * capacity;
	}
	capacity = tmpcapacity;
	cout << "test cap" << capacity << endl;
	return true;
}
Animal AnimalsInZoo::find(const string& animal_name) {
	unsigned int i;
	for (i = 0; i < capacity; i++) {
		if (aarr[i].displayName() == animal_name) {
			return Animal();
		}
	}
}
/*
bool AnimalsInZoo:remove(const string& animal_name) {
	unsigned int i;
	for (int i = 0; i < capacity; i++) { 
	*/
void AnimalsInZoo::readSizes(unsigned int &count, unsigned int &cap){
	count = numAnimals;
	cap = capacity;
	cout << cap << " and " << count << endl;
}




	



		

/*
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

*/

