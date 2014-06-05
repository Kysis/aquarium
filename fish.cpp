#include "fish.h"


Fish::Fish(std::string Breed){
	breed = Breed;
	age = 0;
	hunger = 0;
	alive = true;
}


Fish::~Fish()
{
}
