#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main() {
	Animal *animal1 = new Animal("African Elephant", 1758);
	Animal animal2("Giant Panda", 1869);
	Animal animal3("Alligator", 1801);
	delete animal1;
	animal1 = new Animal("Snow Leopard", 1777);

	animal2.display();
	animal1->display();
	animal3.display();

	delete animal1;

	Animal animal4("Kangaroo", 1790);
//	AnimalsInZoo *zooAnimal = new AnimalsInZoo(0, animal2);
	AnimalsInZoo zooAnimal(0, animal4);
	zooAnimal.setAnimal();
	zooAnimal.displayZoo();
	animal4.display();
	/*
	if (zooAnimal->displayZoo()) {
		zooAnimal->display();
	}
	*/
	return 0;
  



}	


