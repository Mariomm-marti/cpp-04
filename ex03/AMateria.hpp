#ifndef CPP04_EX03_AMATERIA_H_
# define CPP04_EX03_AMATERIA_H_

# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string 			_type;
	AMateria(void);

public:
	AMateria(std::string const &type);
	virtual ~AMateria();

	std::string const	&getType(void) const;

	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif
