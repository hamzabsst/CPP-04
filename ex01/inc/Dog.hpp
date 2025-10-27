/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:48:40 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/21 10:50:34 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		virtual ~Dog();

		virtual void makeSound() const;
		Brain*		getBrain() const;

};
