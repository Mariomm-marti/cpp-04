#include "AAnimal.hpp"
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
	Animal::operator=(rhs);
	delete _brain;
	_brain = new Brain(*(rhs.getBrain()));
	return *this;
}

Brain const	*Cat::getBrain(void) const
{
	return _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "[CAT] Meow! MEEEOW!!" << std::endl;
}
