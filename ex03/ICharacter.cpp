/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:54:03 by areheman          #+#    #+#             */
/*   Updated: 2023/01/02 16:55:25 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.h"
/*
ICharacter::ICharacter()
{
	std::cout<<"ICharacter default constructer"<<std::endl;
	idx = 0;
}

ICharacter::ICharacter(std::string const& name)
{
	std::cout<<"ICharacter constructer with arguments"<<std::endl;
	this->name = name;
	idx = 0;
}


ICharacter::ICharacter(const ICharacter& obj)
{
	std::cout<<"ICharacter copy constructer"<<std::endl;
	*this = obj;

	this->name = obj.name;
	this->idx = obj.idx;
	for(int i =0; i< 4; i++)
	{
		(*(this->inventory))[i] = (*obj.inventory)[i];
	}
	
}

ICharacter& ICharacter::operator=(const ICharacter& obj)
{
	std::cout<<"ICharacter copy assignment constructer"<<std::endl;
	if (this == &obj)
		return (*this);
	this->name = obj.name;
	this->idx = obj.idx;
	if (idx != 0)
	{
		for(int i=0; i<idx; i++)
			delete ((*inventory) + i);
	}
	for(int i =0; i< 4; i++)
	{
		(*(this->inventory))[i] = (*obj.inventory)[i];
	}
	return (*this);
}


ICharacter::~ICharacter()
{
	std::cout<<"ICharacter destructer"<<std::endl;
	if (idx != 0)
	{
		for(int i=0; i<idx; i++)
			delete ((*inventory) + i);
	}
	delete inventory;
}

*/