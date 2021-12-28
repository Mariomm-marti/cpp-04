#ifndef CPP04_EX00_WRONGANIMAL_H_
# define CPP04_EX00_WRONGANIMAL_H_

# include <string>

class WrongAnimal
{
protected:
	std::string		_type;

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &copy);
	virtual			~WrongAnimal(void);
	
	WrongAnimal		&operator=(WrongAnimal const &rhs);
	std::string		getType(void) const;

	void			makeSound(void) const;
};

#endif
