#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo(int numAnimals, Animal animal);
		void display();
	private:
		int numAnimals = 0;
		Animal animal;
	
