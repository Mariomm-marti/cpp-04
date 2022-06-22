#ifndef CPP04_EX00_ANIMAL_H_
# define CPP04_EX00_ANIMAL_H_

# include "Brain.hpp"
# include <string>

class Animal
{
protected:
	std::string		_type;

public:
	Animal(void);
	Animal(Animal const &copy);
	virtual			~Animal(void);
	
	Animal			&operator=(Animal const &rhs);
	std::string		getType(void) const;

	virtual Brain const	*getBrain(void) const;
	virtual void	setBrain(size_t const id, std::string const text);

	virtual void	makeSound(void) const = 0;
};

#endif
