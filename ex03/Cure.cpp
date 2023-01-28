/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:07:49 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 15:16:55 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure():AMateria("cure")
{
	std::cout<<"Cure default constructor"<<std::endl;
}

Cure::Cure(std::string const& type):AMateria(type)
{
	std::cout<<"Cure constructor with argument"<<std::endl;
}

Cure::Cure(const Cure& obj)
{
	std::cout<<"Cure copy constructor"<<std::endl;
	*this = obj;
}

Cure::~Cure()
{
	std::cout<<"Cure destructor"<<std::endl;
}

Cure& Cure::operator=(const Cure& obj)
{
	std::cout<<"Cure copy assignement constructor"<<std::endl;
	if (this == &obj)
		return (*this);
	type = obj.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *p= new Cure();
	return (p);
}

void	Cure::use(ICharacter& target)
{
	std::cout<<"Cure: * heals "<<target.getName();
	std::cout<<"'s wounds *"<<std::endl;
}