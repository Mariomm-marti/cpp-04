#ifndef CPP04_EX03_CHARACTER_H_
# define CPP04_EX03_CHARACTER_H_

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_equipped[4];

public:
	Character(void);
	Character(std::string const &name);
	Character(Character const &copy);
	~Character(void);

	Character	&operator=(Character const &rhs);
	AMateria	*getEquipped(size_t const index) const;

	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif
