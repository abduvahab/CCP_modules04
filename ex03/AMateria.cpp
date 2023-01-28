/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:14:16 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 16:17:41 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria()
{
	std::cout<<"AMateria default constructor"<<std::endl;
}

AMateria::AMateria(std::string const& type):type(type)
{
	std::cout<<"AMateria  constructor with argument"<<std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
	std::cout<<"AMateria copy constructor"<<std::endl;
	*this = obj; 
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	std::cout<<"AMateria copy constructor"<<std::endl;
	if (this == &obj)
		return (*this);
	type = obj.getType();
	return (*this);
}

AMateria::~AMateria()
{
	std::cout<<"AMateria destructor"<<std::endl;
}

std::string const&  AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout<<"Materia: * use Character "<<target.getName();
	std::cout<<" *"<<std::endl;
}