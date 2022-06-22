#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void	testGoodAnimal(void)
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

void	testWrongAnimal(void)
{
	WrongAnimal	*animal;
	WrongAnimal	*cat;

	animal = new WrongAnimal();
	std::cout << "type of animal: " << animal->getType() << std::endl;
	animal->makeSound();

	cat = new WrongCat();
	std::cout << "type of animal: " << cat->getType() << std::endl;
	cat->makeSound();

	delete cat;
	delete animal;
}

int		main(void)
{
	testGoodAnimal();
	std::cout << "-----------------" << std::endl;
	testWrongAnimal();
}
