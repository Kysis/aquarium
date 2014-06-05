#pragma once
#include <vector>
#include "fish.h"
class Aquarium{
public:
	Aquarium();
	~Aquarium();
private:
	std::vector<Fish> fish;
	int temperature;

};

