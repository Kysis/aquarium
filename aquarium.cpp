#include "aquarium.h"


Aquarium::Aquarium(){
	fish = new std::vector<Fish>();
	temperature = 70;
}


Aquarium::~Aquarium(){
}

std::vector<Fish>* Aquarium::getFish(){
	return fish;
}

void Aquarium::addFish(Fish newFish){
	fish->push_back(newFish);
}

int Aquarium::getTemperature(){
	return temperature;
}

void Aquarium::setTemperature(int temp){
	temperature = temp;
}