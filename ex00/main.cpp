#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int		main(void)
{
	Animal	*animal;
	Animal	*dog;
	Animal	*cat;

	animal = new Animal();
	std::cout << "type of animal: " << animal->getType() << std::endl;
	animal->makeSound();

	dog = new Dog();
	std::cout << "type of animal: " << dog->getType() << std::endl;
	dog->makeSound();

	cat = new Cat();
	std::cout << "type of animal: " << cat->getType() << std::endl;
	cat->makeSound();

	delete cat;
	delete dog;
	delete animal;
}
