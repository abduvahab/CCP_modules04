/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:57:47 by areheman          #+#    #+#             */
/*   Updated: 2022/12/28 12:51:31 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal():type("wrong_base")
{
	std::cout<<"WrongAnimal default constructor"<<std::endl;
}

WrongAnimal::WrongAnimal(const std::string type):type(type)
{
	std::cout<<"WrongAnimal constructor with arguments"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout<<"WrongAnimal copy constructor"<<std::endl;
	*this = obj;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout<<"WrongAnimal copy constructor"<<std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<type<<" : ";
	std::cout<<"WrongAnimal destructor"<<std::endl;
}

void	WrongAnimal::makeSound()const
{
	std::cout<<this->type<< ": ";
	std::cout<<"WrongAnimal make sound"<<std::endl;
	
}

std::string WrongAnimal::getType() const 
{
	return (this->type);
}

//dog

WrongDog::WrongDog():WrongAnimal("wrong_dog")
{
	std::cout<<"WrongDog default constructor"<<std::endl;
}

WrongDog::WrongDog(const std::string type):WrongAnimal(type)
{
	std::cout<<"WrongDog constructor with arguments"<<std::endl;
}

WrongDog::WrongDog(const WrongDog& obj)
{
	std::cout<<"WrongDog copy constructor"<<std::endl;
	*this = obj;
}

WrongDog&	WrongDog::operator=(const WrongDog& obj)
{
	std::cout<<"WrongDog copy constructor"<<std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout<<type<<" : ";
	std::cout<<"WrongDog destructor"<<std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout<<this->type<< ": ";
	std::cout<<"WrongDog make sound"<<std::endl;
	
}

//cat

WrongCat::WrongCat():WrongAnimal("wrong_cat")
{
	std::cout<<"WrongCat default constructor"<<std::endl;
}

WrongCat::WrongCat(const std::string type):WrongAnimal(type)
{
	std::cout<<"WrongCat constructor with arguments"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout<<"WrongCat copy constructor"<<std::endl;
	*this = obj;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	std::cout<<"WrongCat copy constructor"<<std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	
	std::cout<<type<<" : ";
	std::cout<<"WrongCat destructor"<<std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout<<this->type<< ": ";
	std::cout<<"WrongCat make moewing"<<std::endl;
	
}





