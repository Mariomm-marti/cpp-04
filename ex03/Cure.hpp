#ifndef CPP04_EX03_CURE_H_
# define CPP04_EX03_CURE_H_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(Cure const &copy);
	virtual ~Cure (void);

	Cure		&operator=(Cure const &rhs);

	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif
