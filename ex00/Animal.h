/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:27:23 by areheman          #+#    #+#             */
/*   Updated: 2022/12/28 12:42:31 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const std::string type);
		Animal(const Animal& obj);
		virtual ~Animal();
		
		Animal& 		operator=(const Animal& obj);
		virtual void	makeSound(void) const;
		void			setType(std::string type);
		std::string	getType(void) const;
		
};

class Dog: public Animal
{
	public:
		Dog();
		Dog(const std::string type);
		Dog(const Dog& obj);
		~Dog();
		
		Dog& 		operator=(const Dog& obj);
		virtual void	makeSound(void) const;		
};

class Cat: public Animal
{
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Cat& obj);
		~Cat();
		
		Cat& 		operator=(const Cat& obj);
		virtual void	makeSound(void) const;		
};



#endif