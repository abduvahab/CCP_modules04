/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:27:23 by areheman          #+#    #+#             */
/*   Updated: 2022/12/29 17:10:30 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_H
#define A_ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.h"

class A_animal
{
	protected:
		std::string type;

	public:
		A_animal();
		A_animal(const std::string type);
		A_animal(const A_animal& obj);
		virtual ~A_animal();
		
		A_animal& 		operator=(const A_animal& obj);
		virtual void	makeSound(void) const = 0;
		void			setType(std::string type);
		std::string	getType(void) const;
		
};

class Dog: public A_animal
{
	public:
		Dog();
		Dog(const std::string type);
		Dog(const Brain* brain);
		Dog(const Dog& obj);
		~Dog();
		
		Dog& 		operator=(const Dog& obj);
		virtual void	makeSound(void) const;
		Brain*	getBrain() const;

	private:
		Brain*	dog_brain;	
};

class Cat: public A_animal
{
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Brain* brain);
		Cat(const Cat& obj);
		~Cat();
		
		Cat& 		operator=(const Cat& obj);
		virtual void	makeSound(void) const;
		Brain*	getBrain() const;

	private:
			Brain* cat_brain;
};



#endif