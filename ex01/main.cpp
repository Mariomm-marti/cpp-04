#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int		main(void)
{
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
	
	for (size_t i = 0; i < 10; i++)
		if (i != 4)
			delete animals[i];
	}
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
	{
		Cat *cat = new Cat();
		cat->setBrain(0, "Cat 1 idea 0");
		cat->setBrain(1, "Cat 1 idea 1");
		std::cout << cat->getBrain()->ideas[1] << std::endl;

		Cat cat2 = Cat(*cat);
		std::cout << cat2.getBrain()->ideas[1] << std::endl;
		cat->setBrain(0, "Caca");
		std::cout << cat->getBrain()->ideas[0] << std::endl;
		std::cout << "TEST copy 2" << std::endl;

		Cat cat3 = cat2;
		std::cout << cat3.getBrain()->ideas[0] << std::endl;
		std::cout << cat3.getBrain()->ideas[1] << std::endl;
		delete cat;
	}
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
	{
		Dog	basic;
		{
			Dog	tmp = basic;
		}

	}
}
