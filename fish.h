#pragma once
#include <string>
class Fish{
public:
	Fish(std::string breed);
	~Fish();
	std::string getBreed();
	void setBreed(std::string);
	int getAge();
	void setAge(int);
	int getHunger();
	void setHunger(int);
	bool isAlive();
	void setAlive(bool);
private:
	std::string breed;
	int age;
	int hunger;
	bool alive;
};

