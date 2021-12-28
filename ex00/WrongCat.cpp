#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "[WRONGCAT] New wrong cat created" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &copy)
{
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[WRONGCAT] WrongCat was deleted, deleting parent..." << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	WrongAnimal::operator=(rhs);
	return *this;
}
