#pragma once
#include <memory>
#include <string>
#include <vector>
#include "Animal.h"
class Record
{
private:
	std::string firstName;
	std::string lastName;
	std::vector<std::shared_ptr<Animal>> myPets;
public:
	Record(std::string, std::string, std::shared_ptr<Animal>);
	void adoptPet(std::shared_ptr<Animal>);
	~Record();
	std::string getPetInfo();
	std::string getInfo();
};

