#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "[BRAIN] New brain created" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "[BRAIN] Brain destroyed" << std::endl;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	for (size_t i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return *this;
}
