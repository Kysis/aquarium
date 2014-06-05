#include "fish.h"


Fish::Fish(std::string Breed){
	breed = Breed;
	age = 0;
	hunger = 0;
	alive = true;
}


Fish::~Fish(){
}

std::string Fish::getBreed(){
	return breed;
}

void Fish::setBreed(std::string newBreed){
	breed = newBreed;
}

int Fish::getAge(){
	return age;
}

void Fish::setAge(int newAge){
	age = newAge;
}

int Fish::getHunger(){
	return hunger;
}

void Fish::setHunger(int newHunger){
	hunger = newHunger;
}

bool Fish::isAlive(){
	return alive;
}

void Fish::setAlive(bool living){
	alive = living;
}