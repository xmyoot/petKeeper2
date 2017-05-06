#pragma once
#include <string>
class Animal
{
private:
	std::string name;
	std::string color;
	std::string size;
	std::string type;
public:
	Animal();
	Animal(std::string, std::string, std::string, std::string);
	~Animal();
	std::string getName() { return name; };
	std::string getColor() { return color; };
	std::string getSize() { return size; };
	std::string getType() { return type; };
	std::string getInfo() {
		std::string output = getType() + "\n";
		output += ("Name: " + getName() + "\n");
		output += ("Color: " + getColor() + "\n");
		output += ("Breed: " + getSize() + "\n");
		output += "--------------------\n";
		return output;
	}
};


