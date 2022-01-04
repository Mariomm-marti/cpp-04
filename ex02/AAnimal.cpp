#include "AAnimal.hpp"
#include <iostream>

Animal::Animal(void) : _type("unknown")
{
	std::cout << "[ANIMAL] New animal created" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "[ANIMAL] Animal was deleted" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	_type = rhs._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return _type;
}

void	Animal::makeSound(void) const
{
	std::cout << "[ANIMAL] Default sound" << std::endl;
}
