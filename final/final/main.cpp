//Hector Jimenez
//05-5-17
//James Wilson
// PetKeeper Final Project

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Shelter.h"

using namespace std;

void begin(const shared_ptr<Shelter> shelter);
void displayShelter(const shared_ptr<Shelter> shelter);
void addAnimal(int, const shared_ptr<Shelter> shelter);

int main() {
	cout << "Welcome to the pet keeper app. Let's add some pets to inventory!" << endl;
	auto shelter = make_shared<Shelter>();
	begin(shelter);
	return 0;
}

void begin(const shared_ptr<Shelter> shelter) {
	system("cls");

	cout << "What type of pet would you like to add?" << endl;
	cout << "1) Dog" << endl;
	cout << "2) Cat" << endl;
	cout << "3) Bird" << endl;


	int choice = -1;
	cin >> choice;
	switch (choice)
	{
	case 1: addAnimal(1, shelter); break;
	case 2: addAnimal(2, shelter); break;
	case 3: addAnimal(3, shelter); break;
	default: cout << "Invalid choice!"; break;
	}

	cout << endl << "Great, now would you like to: " << endl;
	cout << "1) Display all pets" << endl;
	cout << "2) Continue Adding pets" << endl;
	cout << "3) Exit" << endl;

	int choice2 = -1;
	cin >> choice2;
	switch (choice2)
	{
	case 1: displayShelter(shelter); break;
	case 2: begin(shelter); break;
	case 3: exit(0); break;
	default: cout << "Invalid choice!"; break;
	}
	system("pause");
};

void addAnimal(int _type, const shared_ptr<Shelter> shelter) {
	string name, color, size;
	cin.ignore();
	cout << "Enter name: "; getline(cin, name);
	cout << "Enter color: "; getline(cin, color);
	cout << "Enter size: "; getline(cin, size);
	if (_type == 1) {
		shelter->addPet(std::make_shared<Dog>(name, color, size, "DOG"));
	}
	else if (_type == 2) {
		shelter->addPet(std::make_shared<Cat>(name, color, size, "CAT"));
	}
	else if (_type == 3) {
		shelter->addPet(std::make_shared<Bird>(name, color, size, "BIRD"));
	}
};

void displayShelter(const shared_ptr<Shelter> shelter) {
	for (int x = 0; x < shelter->allPets.size(); x++) {
		cout << shelter->allPets[x]->getInfo() << endl;
	}
	cout << "Now would you like to: " << endl;
	cout << "1) Continue Adding pets" << endl;
	cout << "2) Exit" << endl;

	int choice = -1;
	cin >> choice;
	switch (choice)
	{
	case 1: begin(shelter); break;
	case 2: exit(0); break;
	default: cout << "Invalid choice!"; break;
	}
	system("pause");
};

