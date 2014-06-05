#include "aquarium.h"
#include "fish.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main(){
	Aquarium* aquarium = new Aquarium();
	for (int i = 0; i < 10; i++){
		aquarium->addFish(Fish("Goldfish"));
	}

	vector<Fish>* fish_list = aquarium->getFish();
	for (int i = 0; i < fish_list->size(); i++){
		cout << fish_list->at(i).getBreed() << endl;
	}
	cin.get();
	return 0;
}