#ifndef CPP04_EX00_DOG_H_
# define CPP04_EX00_DOG_H_

# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain		*_brain;
public:
	Dog(void);
	Dog(Dog const &copy);
	~Dog(void);

	Dog			&operator=(Dog const &rhs);
	Brain const	*getBrain(void) const;

	void		makeSound(void) const;
};

#endif
