#include <iostream>
# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

void sep( size_t n, std::string msg)
{
	for (size_t i = 0; i < n; i++)
		std::cout << "#########################################################################" << std::endl;
	std::cout << "                                  " << msg << std::endl;
	for (size_t i = 0; i < n; i++)
		std::cout << "#########################################################################" << std::endl;
}

int main(void)
{
	sep(3, "CONSTRUCTOR");
	Animal* anim_array[100];
	for (size_t i = 0; i < 50; i++)
		anim_array[i] = new Dog();
	for (size_t i = 50; i < 100; i++)
		anim_array[i] = new Cat();

	sep(3, "IDEAS");
	std::cout << std::endl;
	sep(1, "Dog");
	static_cast<Dog*>(anim_array[42])->setIdea("Bark at midnight");
	static_cast<Dog*>(anim_array[42])->getIdea();
	sep(1, "Cat");
	static_cast<Cat*>(anim_array[84])->setIdea("Scratch and bite my owner");
	static_cast<Cat*>(anim_array[84])->getIdea();
	

	sep(3, "DESTRUCTOR");
	for (int i = 99; i >= 0; i--)
		delete anim_array[i];
	return 0;
}

// int main( void )
// {
// 	Animal* anim_array[100];
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	const WrongAnimal* w = new WrongCat();

// 	for (size_t i = 0; i < 50; i++)
// 		anim_array[i] = new Dog();
// 	for (size_t i = 50; i < 100; i++)
// 		anim_array[i] = new Cat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << meta->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	w->makeSound();

// 	for (int i = 99; i >= 0; i--)
// 	{
// 		delete anim_array[i];
// 	}
	
// 	delete w;
// 	delete i;
// 	delete j;
// 	delete meta;
// 	return 0;
// }

