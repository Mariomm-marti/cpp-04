#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "[DOG] New dog created" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "[DOG] Dog was deleted, deleting parent..." << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
	delete _brain;
	_brain = new Brain(*(rhs.getBrain()));
	std::cout << "::::::::::::::" << _brain->ideas[0] << std::endl;
	return *this;
}

Brain	*Dog::getBrain(void) const
{
	return _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "[DOG] Woof! WOOF WOOOOF" << std::endl;
}
