/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:51:10 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/17 09:30:02 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Polymorphism: How to treat derived class objects through a base class interface.

// virtual Functions: The C++ mechanism to enable polymorphic behavior (dynamic binding).

// Static vs. Dynamic Binding: Understanding when the function call is resolved (at compile-time vs. at run-time).

// Virtual Destructors: The critical importance of virtual destructors in a base class to prevent memory leaks.
void testBasicPolymorphism()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}

void testWrongClasses()
{
	std::cout << std::endl;
	std::cout << "----WRONG ANIMAL----" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
}

int main()
{
	testBasicPolymorphism();
	testWrongClasses();
	return 0;
}
