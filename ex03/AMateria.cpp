#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) : _type("default") { }

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::~AMateria(void) { }

std::string const	&AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "[AMATERIA] Called AMateria::use on " << target.getName() << std::endl;
}
