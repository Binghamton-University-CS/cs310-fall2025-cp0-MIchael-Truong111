#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main() {
	Animal animal2("Giant Panda", 300.4, false);
	Animal animal3("Alligator", 200.1, false);
	AnimalsInZoo small_zoo;
	small_zoo.store(animal2);
	small_zoo.store(animal3);
	unsigned int size, capacity;
	cout << capacity;
	small_zoo.readSizes(size, capacity);

	/*
	animal2.display();
	animal1->display();
	animal3.display();
	
	delete animal1;

	Animal animal4("Kangaroo", 1790.9, true);
//	AnimalsInZoo *zooAnimal = new AnimalsInZoo(0, animal2);
	AnimalsInZoo zooAnimal(0, animal4);
	zooAnimal.setAnimal();
	zooAnimal.displayZoo();
	animal4.display();
	*/
	return 0;
  



}	


