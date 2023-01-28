/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:22:39 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 16:19:11 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character()
{
	std::cout<<"Character default constructer"<<std::endl;
	idx = -1;
	for(int i = 0; i<4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string const& name)
{
	std::cout<<"Character constructer with arguments"<<std::endl;
	this->name = name;
	idx = -1;
	for(int i = 0; i<4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& obj)
{
	std::cout<<"Character copy constructer"<<std::endl;
	*this = obj;
}

Character& Character::operator=(const Character& obj)
{
	std::cout<<"Character copy assignment constructer"<<std::endl;
	if (this == &obj)
		return (*this);
	this->name = obj.name;
	this->idx = obj.idx;
	if (idx != -1)
	{
		for(int i=0; i<=idx; i++)
		{
			if (inventory[i] != NULL)
			{
				delete (inventory[i]);
				inventory[i] = NULL;	
			}
		}
	}
	for(int i =0; i< 4; i++)
	{
		if (obj.inventory[i] != NULL)
		{
			(inventory)[i] =(obj.inventory[i])->clone();
		}
	}
	return (*this);
}


Character::~Character()
{
	std::cout<<"Character destructer"<<std::endl;
	if (idx != -1)
	{
		for(int i=0; i < 4; i++)
		{
			if (inventory[i] != NULL)
				delete (inventory[i]);
		}
	}
}

std::string const& Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if ((idx < 3))
	{
		idx++;
		int i;
		i = 0;
		while(i < 4)
		{
			if (inventory[i] == NULL)
			{
				inventory[i] = m;
				break;
			}
			i++;
		}
	}	
}

void	Character::unequip(int idx)
{
	if ((idx <= 3) && (idx >= 0))
	{
		inventory[idx] = NULL;
		this->idx--;
	}	
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx <= 3) && (idx >= 0))
	{
		
		if (inventory[idx] != NULL)
		{
			inventory[idx]->use(target);
		}
	}
}
