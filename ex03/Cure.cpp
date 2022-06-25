#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Cure::Cure(void) : AMateria("cure") { }

Cure::Cure(Cure const &copy)
{
	*this = copy;
}

Cure::~Cure(void) { }

Cure		&Cure::operator=(Cure const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

AMateria	*Cure::clone(void) const
{
	Cure	*cure;

	cure = new Cure(*this);
	return cure;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " <<
		target.getName() << "'s wounds *" << std::endl;
}
