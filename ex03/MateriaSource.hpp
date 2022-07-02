#ifndef CPP04_EX03_MATERIASOURCE_H_
# define CPP04_EX03_MATERIASOURCE_H_

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria			*_learnedMateria[4];

public:
	MateriaSource(void);
	MateriaSource(MateriaSource &copy);
	virtual ~MateriaSource(void);

	MateriaSource	&operator=(MateriaSource &rhs);
	AMateria		*getLearnedMateria(size_t const index) const;

	void			learnMateria(AMateria *materia);
	AMateria		*createMateria(std::string const &type);
};

#endif
