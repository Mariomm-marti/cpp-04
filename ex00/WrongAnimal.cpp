#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("unknown")
{
	std::cout << "[WRONGANIMAL] New wrong animal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[WRONGANIMAL] WrongAnimal was deleted" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	_type = rhs._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return _type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[WRONGANIMAL] Default sound" << std::endl;
}
