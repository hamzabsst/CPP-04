/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:51:10 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/21 11:07:48 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"
#include "inc/Cat.hpp"


/*
** C++ Module 04 - Exercise 01: Polymorphism and Memory Management
**
** CORE CONCEPTS ADDRESSED:
**
** 1. VIRTUAL DESTRUCTOR (Polymorphic Destruction):
** - Goal: Ensure correct cleanup when deleting derived objects (Dog/Cat) via a base class pointer (Animal*).
** - Implementation: The base class 'Animal' MUST have a 'virtual ~Animal()' destructor.
** - Why: Without 'virtual', only the Animal destructor is called, causing a memory leak of the Brain* in Dog/Cat.
**
** 2. DEEP COPY (The Rule of Three/Five):
** - Goal: Prevent two objects (e.g., original and copied Cat) from sharing the same dynamically allocated Brain* memory.
** - Implementation: We manually defined the following for both Dog and Cat:
** a) Destructor: Handles 'delete _brain;'
** b) Copy Constructor: Allocates NEW Brain: 'this->_brain = new Brain(*other._brain);'
** c) Copy Assignment Operator (operator=): Handles 3 steps:
** 1. Self-Assignment Check ('if (this != &other)')
** 2. Cleanup OLD Brain ('delete this->_brain;')
** 3. Deep Copy (Allocate NEW Brain and copy contents)
** - Why: The default (shallow) copy only copies the pointer address, leading to a "double free" error when objects are destroyed.
*/

void testDeepCopy()
{

	Cat original;


	original.getBrain()->setIdea(0, "I am the original idea.");
	Cat copy = original;

	Cat assigned;
	assigned = original;

	original.getBrain()->setIdea(0, "I am a NEW idea!");

	//The deep copy test:
	// If the copy and assigned objects still hold "I am the original idea.",
	// the copy was deep and successful.
	std::cout << "Original's new idea: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy's idea: " << copy.getBrain()->getIdea(0) << std::endl;
	std::cout << "Assigned's idea: " << assigned.getBrain()->getIdea(0) << std::endl;
}

int main()
{
	const Animal* i = new Cat();
	const Cat micha;
	Brain *brain = micha.getBrain();


	brain->setIdea(0, "i just wanma eat some food and sleep");
	std::cout << brain->getIdea(0) << std::endl;
	i->makeSound();
	delete i;//should not create a leak
	std::cout << std::endl;
	std::cout << std::endl;
	testDeepCopy();
	return 0;
}
