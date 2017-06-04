//Hector Jimenez
//05-5-17
//James Wilson
// PetKeeper Final Project

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Shelter.h"
#include "Record.h"

using namespace std;

void begin(const shared_ptr<Shelter>);
void mainMenu(const shared_ptr<Shelter>);

void adoptPet(std::string, const shared_ptr<Shelter>);

void createRecord(const shared_ptr<Shelter>);
void displayAllRecords(const shared_ptr<Shelter>);
void displayRecord(const shared_ptr<Shelter>);
void modifyRecord(const shared_ptr<Shelter>);

void addPets(const shared_ptr<Shelter>);
void displayAllPets(const shared_ptr<Shelter>);
void displayPet(const shared_ptr<Shelter>);
void modifyPet(const shared_ptr<Shelter>);

void displayShelter(const shared_ptr<Shelter>);

int main() {
	auto shelter = make_shared<Shelter>();
	begin(shelter);
	return 0;
}

void begin(const shared_ptr<Shelter> shelter) {
	cout << "Adoption Tracker by Hector\n";
	cout << "Let's add some pets!" << endl;
	addPets(shelter);
	mainMenu(shelter);
	system("pause");
};

void mainMenu(const shared_ptr<Shelter> shelter) {
	cout << endl << "Now, would you like to: " << endl;
	cout << "1) Add more animals to the shelter." << endl;
	cout << "2) Modify existing Animal." << endl;
	cout << "3) Display all animal data." << endl;
	cout << "4) Display specific animal information." << endl;
	cout << "5) Create Adoption Record." << endl;
	cout << "6) Display all stored records." << endl;
	cout << "7) Display specific record information." << endl;
	cout << "8) Modify existing Record." << endl;

	int mod = -1;
	cin >> mod;
	switch (mod) {
	case 1: addPets(shelter);
	case 2: modifyPet(shelter);
	case 3: displayAllPets(shelter);
	case 4: displayPet(shelter);
	case 5: createRecord(shelter);
	case 6: displayAllRecords(shelter);
	case 7: displayRecord(shelter);
	case 8: modifyRecord(shelter);
	case 9: exit(0); break;
	default: cout << "Wrong input"; break;
	}
};

void addPets(const shared_ptr<Shelter> shelter) {
	int _type;
	cout << "What type of pet would you like to add?" << endl;
	cout << "1) Dog" << endl;
	cout << "2) Cat" << endl;
	cout << "3) Bird" << endl;
	
	cin >> _type;

	if (_type == 1) {
		string name, color, size;
		cin.ignore();
		cout << "Enter name: "; getline(cin, name);
		cout << "Enter color: "; getline(cin, color);
		cout << "Enter size: "; getline(cin, size);
		shelter->addPet(std::make_shared<Dog>(name, color, size, "DOG"));
	}
	else if (_type == 2) {
		string name, color, size;
		cin.ignore();
		cout << "Enter name: "; getline(cin, name);
		cout << "Enter color: "; getline(cin, color);
		cout << "Enter size: "; getline(cin, size);
		shelter->addPet(std::make_shared<Cat>(name, color, size, "CAT"));
	}
	else if (_type == 3) {
		string name, color, size;
		cin.ignore();
		cout << "Enter name: "; getline(cin, name);
		cout << "Enter color: "; getline(cin, color);
		cout << "Enter size: "; getline(cin, size);
		shelter->addPet(std::make_shared<Bird>(name, color, size, "BIRD"));
	}
};
void displayAllPets(const shared_ptr<Shelter> shelter) {
	for (int x = 0; x < shelter->allPets.size(); x++) {
		cout << shelter->allPets[x]->getInfo();
	}
};
void displayPet(const shared_ptr<Shelter>);
void modifyPet(const shared_ptr<Shelter>);

void adoptPet(std::string, const shared_ptr<Shelter>);


void displayShelter(const shared_ptr<Shelter> shelter) {
	displayAllPets(shelter);
	displayAllRecords(shelter);
};

void createRecord(const shared_ptr<Shelter>);
void displayAllRecords(const shared_ptr<Shelter>);
void displayRecord(const shared_ptr<Shelter> shelter) {
	for (int x = 0; x < shelter->allRecords.size(); x++) {
		cout << shelter->allRecords[x]->getInfo();
	}
};
void modifyRecord(const shared_ptr<Shelter>);



