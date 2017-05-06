#pragma once
#include<string>
#include "Animal.h"

class Bird :public Animal
{
public:
	Bird(std::string, std::string, std::string, std::string);
	~Bird();
};

