#ifndef CPP04_EX00_WRONGCAT_H_
# define CPP04_EX00_WRONGCAT_H_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(WrongCat const &copy);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &rhs);
};

#endif
