/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:00:34 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/27 20:33:18 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}
Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
