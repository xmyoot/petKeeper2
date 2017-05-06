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
	Shelter();
	~Shelter();
	void addPet(std::shared_ptr <Animal> pet)
	{
		allPets.push_back(pet);
	}

};

