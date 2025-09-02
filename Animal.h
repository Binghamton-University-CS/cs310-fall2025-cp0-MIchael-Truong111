#include <iostream>
#include <stdlib.h>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H



class Animal {
   public:

	Animal(string speciesName, unsigned int discoveryYear);
	Animal() : species(""), year_discovered(0) {};	
	void display(); 


   private:
      string species = "";
      unsigned int year_discovered = 0;
};

#endif
