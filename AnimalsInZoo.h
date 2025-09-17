#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo();
		//AnimalsInZoo(unsigned int count, unsigned int capacity, Animal *aarr);
		//AnimalsInZoo() : numAnimals(0), capacity(1), aarr(nullptr) {}
		bool store(Animal &another_animal);
		void readSizes(unsigned int &count, unsigned int &capacity);
	        bool remove(const string& animal_name);
		Animal find(const string& animal_name);
		
	private:
		unsigned int numAnimals;
		unsigned int capacity;
		Animal *aarr = nullptr;
};
	
