#ifndef CPP04_EX00_CAT_H_
# define CPP04_EX00_CAT_H_

class Cat : public Animal
{
public:
	Cat(void);
	Cat(Cat const &copy);
	~Cat(void);

	Cat		&operator=(Cat const &rhs);
	void	makeSound(void) const;
};

#endif
