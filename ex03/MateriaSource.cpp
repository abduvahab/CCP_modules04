/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:08:43 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 15:36:03 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"


MateriaSource::MateriaSource()
{
	std::cout<<"MateriaSource default constructor"<<std::endl;
	id = -1;
	for(int i = 0; i<4; i++)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	std::cout<<"MateriaSource copy constructor"<<std::endl;
	*this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	std::cout<<"MateriaSource copy assignement constructor"<<std::endl;
	if (this == &obj)
		return (*this);
	id = obj.id;
	for(int i = 0; i <= id; i++)
		inventory[i] = obj.inventory[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout<<"MateriaSource destructor"<<std::endl;
	for(int i = 0; i<4; i++)
		delete inventory[i];
}

 void MateriaSource::learnMateria(AMateria* m)
 {
	if (id < 3)
	{
		id++;
		inventory[id] = m;
	}
 }
 AMateria* MateriaSource::createMateria(std::string const& type)
 {
	int i;
	i = 0;
	while (i <= this->id)
	{
		if (type.compare(inventory[i]->getType()) == 0)
		{
			break ;
		}
		i++;
	}
	if (i > this->id)
		return (0);
	return (inventory[i]->clone());
 }