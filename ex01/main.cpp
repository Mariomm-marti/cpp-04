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
	static_cast<Dog *>(animals[5])->getBrain()->ideas[0] = "lorem ipsum";
	animals[4] = animals[5];
	static_cast<Dog *>(animals[5])->getBrain()->ideas[0] = "dolor sit amet";
	std::cout << static_cast<Dog *>(animals[4])->getBrain()->ideas[0] << std::endl;
	
	for (size_t i = 0; i < 10; i++)
		if (i != 4)
			delete animals[i];
}
