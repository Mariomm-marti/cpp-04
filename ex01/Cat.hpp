#ifndef CPP04_EX00_CAT_H_
# define CPP04_EX00_CAT_H_

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain		*_brain;
public:
	Cat(void);
	Cat(Cat const &copy);
	~Cat(void);

	Cat			&operator=(Cat const &rhs);
	Brain const	*getBrain(void) const;

	void	makeSound(void) const;
};

#endif
