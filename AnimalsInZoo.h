#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo(int numAnimals, Animal animal);
		AnimalsInZoo() : numAnimals(0), animal("", 0) {};
		void display();
	private:
		int numAnimals = 0;
		Animal animal;
};
	
