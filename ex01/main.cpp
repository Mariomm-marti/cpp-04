#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int		main(void)
{
	Animal	*animals[10];

	for (size_t i = 0; i < 10; i++)
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();

	std::cout << "--------- Testing deep copy-assignment" << std::endl;
	delete animals[4];
	animals[4] = animals[5];
	delete animals[5];
	
	for (size_t i = 0; i < 10; i++)
		if (i != 4 && i != 5)
			delete animals[i];
}
