#include "Animal.h"

Animal::Animal()
{
}
Animal::Animal(std::string _name, std::string _color, std::string _size, std::string _type)
{
	name = _name;
	color = _color;
	size = _size;
	type = _type;
}

Animal::~Animal()
{
}