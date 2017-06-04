#pragma once
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include <memory>
class Shelter
{
public:
	std::vector <std::shared_ptr<Animal>> allPets;
	std::vector <std::shared_ptr<Animal>> allRecords;
	Shelter();
	~Shelter();
	void addPet(std::shared_ptr <Animal> pet)
	{
		allPets.push_back(pet);
	}
	void deletePet(std::string pet)
	{
		std::transform(pet.begin(), pet.end(), pet.begin(), ::tolower);
		for (int x = 0; x < allPets.size(); x++) {
			if (pet == allPets[x]->getName()) {
				allPets.erase(std::find(allPets.begin(), allPets.end(), allPets[x]));
			}
		}
	}
	void addPet(std::shared_ptr <Animal> pet)
	{
		allPets.push_back(pet);
	}
	void addRecord(std::shared_ptr <Animal> record)
	{
		allRecords.push_back(record);
	}
};

