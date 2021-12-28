#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "[CAT] New cat created" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "[CAT] Cat was deleted, deleting parent..." << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "[CAT] Meow! MEEEOW!!" << std::endl;
}
