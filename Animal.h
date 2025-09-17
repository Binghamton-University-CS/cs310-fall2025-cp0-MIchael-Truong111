#include <iostream>
#include <stdlib.h>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H



class Animal {
   public:

	Animal(string species, float weight, bool dangrous);
	Animal() : species(" "), weight(0), danger(false) {};	
	string displayName();
	float displayWeight();
	bool displayDanger();


   private:
      string species;
      float weight;
      bool danger;
};

#endif
