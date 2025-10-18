/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:57:25 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/18 11:14:00 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}
Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = other;
}
Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain Assignment Operator called" << std::endl;
	return *this;
}
Brain::~Brain()
{
	std::cout << "Default Destructor for Brain is called" << std::endl;
}
