/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:08:30 by areheman          #+#    #+#             */
/*   Updated: 2022/12/29 17:11:42 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	std::cout<<"Brain default constructor"<<std::endl;
}

Brain::Brain(const std::string ideas[100])
{
	std::cout<<"Brain constructor with ideas"<<std::endl;
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = ideas[i];
}

Brain::~Brain()
{
	std::cout<<"Brain destructor"<<std::endl;
//	delete ideas;
}

Brain::Brain(const Brain& obj)
{
	std::cout<<"Brain copy constructor"<<std::endl;
	*this = obj;
}

Brain&	Brain::operator=(const Brain& obj)
{
	std::cout<<"Brain copy assignement constructor"<<std::endl;
	if (this == &obj)
		return (*this);
	for(int i=0; i < 100 ; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

void	Brain::setIdeas(const std::string ideas[100])
{
	for(int i =0; i< 100;i++)
	{
		this->ideas[i] = ideas[i];
	}
}

void	Brain::showIdeas()
{
	for (int i = 0; i < 100; i++)
		std::cout<<ideas[i]<<" ";
	std::cout<<std::endl;
}