#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "[DOG] New dog created" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "[DOG] Dog was deleted, deleting parent..." << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "[DOG] Woof! WOOF WOOOOF" << std::endl;
}
