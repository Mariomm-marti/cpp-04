#ifndef CPP04_EX03_ICE_H_
# define CPP04_EX03_ICE_H_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const &copy);
	virtual ~Ice(void);

	Ice			&operator=(Ice const &rhs);

	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif
