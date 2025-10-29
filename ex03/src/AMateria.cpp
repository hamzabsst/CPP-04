/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:02:45 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/29 18:30:40 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type){}

AMateria::AMateria(const AMateria& other) : _type(other._type){}

AMateria& AMateria::operator=(const AMateria& other)
{
	(void)other;
	return *this;
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
