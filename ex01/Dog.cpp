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
	std::cout << "[DOG] Calling assignment operator" << std::endl;
	Animal::operator=(rhs);
	delete _brain;
	_brain = new Brain(*(rhs.getBrain()));
	return *this;
}

Brain const	*Dog::getBrain(void) const
{
	return _brain;
}

void	Dog::setBrain(size_t const id, std::string const text)
{
	std::cout << "[DOG] Setting new idea" << std::endl;
	_brain->ideas[id] = text;
}

void	Dog::makeSound(void) const
{
	std::cout << "[DOG] Woof! WOOF WOOOOF" << std::endl;
}
