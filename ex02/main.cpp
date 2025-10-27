/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:51:10 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/27 20:35:47 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

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
	return 0;
}
