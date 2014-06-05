#pragma once
#include <string>
class Fish{
public:
	Fish(std::string breed);
	~Fish();
private:
	std::string breed;
	int age;
	int hunger;
	bool alive;
};

