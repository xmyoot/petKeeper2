#pragma once
#include<string>
#include "Animal.h"

class Cat :public Animal
{
public:
	Cat(std::string, std::string, std::string, std::string);
	~Cat();
};