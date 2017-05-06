#pragma once
#include<string>
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(std::string, std::string, std::string, std::string);
	~Dog();
};

