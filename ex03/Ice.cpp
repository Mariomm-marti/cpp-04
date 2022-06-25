#include <iostream>
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Ice::Ice(void) : AMateria("ice") { }

Ice::Ice(Ice const &copy)
{
	*this = copy;
}

Ice::~Ice(void) { }

Ice		&Ice::operator=(Ice const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

AMateria	*Ice::clone(void) const
{
	Ice	*ice;

	ice = new Ice(*this);
	return ice;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " <<
		target.getName() << " *" << std::endl;
}
