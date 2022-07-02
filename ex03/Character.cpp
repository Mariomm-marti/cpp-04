#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : _name("DEFCHAR")
{
	for (size_t i = 0; i < 4; i++)
		_equipped[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
		_equipped[i] = NULL;
}

Character::Character(Character const &copy)
{
	_name = copy.getName();
	for (size_t i = 0; i < 4; i++)
		_equipped[i] = copy.getEquipped(i)->clone();
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_equipped[i])
		{
			delete _equipped[i];
			_equipped[i] = NULL;
		}
	}
}

Character	&Character::operator=(Character const &rhs)
{
	_name = rhs.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (_equipped[i])
		{
			delete _equipped[i];
			_equipped[i] = NULL;
		}
		if (rhs.getEquipped(i))
			_equipped[i] = rhs.getEquipped(i)->clone();
	}
	return *this;
}

AMateria	*Character::getEquipped(size_t const index) const
{
	return _equipped[index];
}

std::string const	&Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	ssize_t	use_slot;

	if (m == NULL)
		return ;
	use_slot = -1;
	for (size_t i = 0; i < 4 && use_slot == -1; i++)
		if (_equipped[i] == NULL)
			use_slot = i;
	if (use_slot == -1)
		return ;
	_equipped[use_slot] = m;
	std::cout << _name << " equipped " << m->getType() << std::endl;
}

void	Character::unequip(int idx)
{
	if (_equipped[idx] == NULL)
		return ;
	std::cout << _name << " dropped " << _equipped[idx]->getType() << std::endl;
	_equipped[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_equipped[idx] == NULL)
		return ;
	_equipped[idx]->use(target);
}
