#include "Animal.hpp"
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
	std::cout << "[ANIMAL] Calling assignment operator" << std::endl;
	_type = rhs._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return _type;
}

Brain const	*Animal::getBrain(void) const
{
	std::cout << "[ANIMAL] Warning called getBrain for default animal" << std::endl;
	return NULL;
}

void	Animal::setBrain(size_t const id, std::string const text)
{
	(void)id;
	(void)text;
	std::cout << "[ANIMAL] Warning called setBrain for default animal" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "[ANIMAL] Default sound" << std::endl;
}
