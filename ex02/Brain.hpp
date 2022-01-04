#ifndef CPP04_EX01_BRAIN_H_
# define CPP04_EX01_BRAIN_H_

# include <string>

class Brain
{
public:
	std::string		ideas[100];

	Brain(void);
	Brain(Brain const &copy);
	~Brain(void);

	Brain			&operator=(Brain const &rhs);
};

#endif
