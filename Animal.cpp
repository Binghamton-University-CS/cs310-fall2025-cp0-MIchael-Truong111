#include <iostream>
#include <stdlib.h>
#include "Animal.h"

using namespace std;


Animal::Animal(string speciesName, float anWeight, bool dangrousness) {
	species = speciesName;
	weight = anWeight;
	danger = dangrousness;
}
string Animal::displayName() {
	return species;
}
bool Animal::displayDanger() {
	return danger;

}
float Animal::displayWeight() {
	return weight;
}
  


   
