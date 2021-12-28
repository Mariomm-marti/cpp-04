#ifndef CPP04_EX00_DOG_H_
# define CPP04_EX00_DOG_H_

class Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog const &copy);
	~Dog(void);

	Dog		&operator=(Dog const &rhs);
	void	makeSound(void) const;
};

#endif
