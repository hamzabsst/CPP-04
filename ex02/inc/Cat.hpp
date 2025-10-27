/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:48:10 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/21 10:51:58 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		virtual ~Cat();

		virtual void makeSound() const;
		Brain* getBrain() const;

};
