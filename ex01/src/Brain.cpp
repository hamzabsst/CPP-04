/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:57:25 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/21 10:56:33 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}
Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = other._ideas[i];
	}
}
Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain Assignment Operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}
Brain::~Brain()
{
	std::cout << "Default Destructor for Brain is called" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return _ideas[index];
	return "";
}
