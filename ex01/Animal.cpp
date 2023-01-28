/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:10 by areheman          #+#    #+#             */
/*   Updated: 2022/12/29 18:13:38 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal():type("base")
{
	std::cout<<"animal default constructor"<<std::endl;
}

Animal::Animal(std::string type):type(type)
{
	std::cout<<"animal constructor with arguments"<<std::endl;
}

Animal::Animal(const Animal& obj)
{
	std::cout<<"animal copy constructor"<<std::endl;
	*this = obj;
}

Animal::~Animal()
{
	std::cout<<type<<" : ";
	std::cout<<"animal destructor"<<std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	std::cout<<"animal copy assignement constructor"<<std::endl;
	if (this == &obj)
		return *this;
	type = obj.type;
	return (*this);
}

void	Animal::setType(std::string type)
{
	this->type = type; 
}

void	Animal::makeSound(void) const
{
	std::cout<<type<<" : animal sound"<<std::endl; 
}

std::string	Animal::getType(void) const 
{
	return (type); 
}



//dog



Dog::Dog():Animal("Dog")
{
	std::cout<<"Dog default constructor"<<std::endl;
	dog_brain = new Brain();
}

Dog::Dog(std::string type):Animal(type)
{
	std::cout<<"Dog constructor with arguments"<<std::endl;
	dog_brain = new Brain();
}

Dog::Dog(const Brain* brain)
{
	std::cout<<"Dog constructor with arguments"<<std::endl;
	dog_brain = new Brain((*brain));
}

Dog::Dog(const Dog& obj)
{
	std::cout<<"Dog copy constructor"<<std::endl;
	type = obj.type;
	dog_brain = new Brain();
	*(dog_brain) = *(obj.dog_brain);
}

Dog::~Dog()
{
	std::cout<<type<<" : ";
	std::cout<<"Dog destructor"<<std::endl;
//	dog_brain->~Brain();
	delete dog_brain;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout<<"Dog copy assignement constructor"<<std::endl;
	if (this == &obj)
		return *this;
	type = obj.type;
	*(dog_brain) = *(obj.dog_brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout<<type<<" : Dog is barking"<<std::endl; 
}

Brain* Dog::getBrain() const
{
	return this->dog_brain;
}


//cat



Cat::Cat():Animal("Cat")
{
	std::cout<<"Cat default constructor"<<std::endl;
	cat_brain = new Brain();
}

Cat::Cat(std::string type):Animal(type)
{
	std::cout<<"Cat constructor with arguments"<<std::endl;
	cat_brain = new Brain();
}

Cat::Cat(const Brain* brain)
{
	std::cout<<"Cat constructor with arguments"<<std::endl;
	cat_brain = new Brain((*brain));
}

Cat::Cat(const Cat& obj)
{
	std::cout<<"Dog copy constructor"<<std::endl;
	this->type = obj.type;
	cat_brain = new Brain();
	*(cat_brain) = *(obj.cat_brain);
}

Cat::~Cat()
{
	std::cout<<type<<" : ";
	std::cout<<"Cat destructor"<<std::endl;
//	cat_brain->~Brain();
	delete	cat_brain;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout<<"Cat copy assignement constructor"<<std::endl;
	if (this == &obj)
		return *this;
	type = obj.type;
	*(cat_brain) = *(obj.cat_brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout<<type<<" : Cat is moewing"<<std::endl; 
}

Brain* Cat::getBrain() const
{
	return this->cat_brain;
}