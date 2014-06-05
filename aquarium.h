#pragma once
#include <vector>
#include "fish.h"
class Aquarium{

public:
	Aquarium();
	~Aquarium();
	void addFish(Fish fish);
	int getTemperature();
	void setTemperature(int temp);

private:
	std::vector<Fish>* fish;
	int temperature;

};

