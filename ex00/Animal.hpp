/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:54:55 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/16 19:31:21 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		virtual ~Animal();

		virtual void 		makeSound() const;
		virtual std::string getType() const;
};

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		virtual ~Cat();

		virtual void makeSound() const;
};

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		virtual ~Dog();

		virtual void makeSound() const;
};

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal& operator=(const WrongAnimal &other);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat& operator=(const WrongCat &other);
		~WrongCat();

		void makeSound() const;
};
