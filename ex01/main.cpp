/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:51:10 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/29 18:32:56 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

void testDeepCopy()
{
	Cat original;
	original.getBrain()->setIdea(0, "I am the original idea.");
	Cat copy = original;

	Cat assigned;
	assigned = original;

	original.getBrain()->setIdea(0, "I am a NEW idea!");

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
