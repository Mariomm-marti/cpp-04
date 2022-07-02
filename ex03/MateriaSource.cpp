#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "[MATERIASOURCE] Called default constructor" << std::endl;
	for (size_t i = 0; i < 4; i++)
		_learnedMateria[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	std::cout << "[MATERIASOURCE] Called copy constructor" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "[MATERIASOURCE] Called destructor" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if (_learnedMateria[i] != NULL)
		{
			delete _learnedMateria[i];
			_learnedMateria[i] = NULL;
		}
}

MateriaSource	&MateriaSource::operator=(MateriaSource &rhs)
{
	std::cout << "[MATERIASOURCE] Called assignment operator" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (_learnedMateria[i] != NULL)
		{
			delete _learnedMateria[i];
			_learnedMateria[i] = NULL;
		}
		if (rhs.getLearnedMateria(i) != NULL)
			_learnedMateria[i] = rhs.getLearnedMateria(i)->clone();
		else
			_learnedMateria[i] = NULL;
	}
	return *this;
}

AMateria		*MateriaSource::getLearnedMateria(size_t const index) const
{
	if (index >= 4)
		return (NULL);
	return _learnedMateria[index];
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	ssize_t	freeIndex;

	if (!materia)
		return ;
	freeIndex = -1;
	for (size_t i = 0; i < 4 && freeIndex == -1; i++)
		if (_learnedMateria[i] == NULL)
			freeIndex = i;
	if (freeIndex == -1)
	{
		std::cout << "[MATERIASOURCE] Inventory is full!" << std::endl;
		delete materia;
		return ;
	}
	std::cout << "[MATERIASOURCE] Learned new materia!" << std::endl;
	_learnedMateria[freeIndex] = materia;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
		if (_learnedMateria[i] && _learnedMateria[i]->getType() == type)
			return _learnedMateria[i]->clone();
	std::cout << "[MATERIASOURCE] Materia " << type << " is unknown to the generator!" << std::endl;
	return (NULL);
}
