/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:43:45 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 13:46:51 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"

Ice::Ice():AMateria("ice")
{
	std::cout<<"ice default constructor"<<std::endl;
}

Ice::Ice(std::string const& type):AMateria(type)
{
	std::cout<<"ice constructor with argument"<<std::endl;
}

Ice::Ice(const Ice& obj)
{
	std::cout<<"ice copy constructor"<<std::endl;
	*this = obj;
}

Ice::~Ice()
{
	std::cout<<"ice desstructor"<<std::endl;
}

Ice& Ice::operator=(const Ice& obj)
{
	std::cout<<"ice copy assignement constructor"<<std::endl;
	if (this == &obj)
		return (*this);
	type = obj.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *p= new Ice();
	return (p);
}

void	Ice::use(ICharacter& target)
{
	
	std::cout<<"Ice: * shoots an ice bolt at "<<target.getName();
	std::cout<<" *"<<std::endl;
}

