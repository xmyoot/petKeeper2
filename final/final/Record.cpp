#include "Record.h"



Record::Record(std::string _firstName, std::string _lastName, std::shared_ptr<Animal> _pet): firstName(_firstName), lastName(_lastName)
{
	myPets.push_back(_pet);
}

void Record::adoptPet(std::shared_ptr<Animal> _pet)
{
	myPets.push_back(_pet);
}


Record::~Record()
{
}

std::string Record::getPetInfo()
{
	std::string output;
	for (int x = 0; x < myPets.size(); x++) {
		output += myPets[x]->getInfo();
	}
	return output;
}

std::string Record::getInfo()
{
	std::string output = ("\n=====================\nRECORD INFO\n");
	output += ("FirstName: " + firstName + "\n");
	output += ("LastName: " + lastName + "\n");
	output += ("Pet's Adopted: " + getPetInfo() + "\n");
	output += "--------------------\n";
	return output;
}
