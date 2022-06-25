#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "[CAT] New cat created" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "[CAT] Cat was deleted, deleting parent..." << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "[CAT] Calling assignment operator" << std::endl;
	Animal::operator=(rhs);
	_brain = new Brain(*(rhs.getBrain()));
	std::cout << "::::::::::::::" << _brain->ideas[0] << std::endl;
	return *this;
}

Brain	*Cat::getBrain(void) const
{
	return _brain;
}

void	Cat::setBrain(size_t const id, std::string const text)
{
	std::cout << "[CAT] Setting new idea" << std::endl;
	_brain->ideas[id] = text;
}

void	Cat::makeSound(void) const
{
	std::cout << "[CAT] Meow! MEEEOW!!" << std::endl;
}
