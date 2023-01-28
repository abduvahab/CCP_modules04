/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:27:14 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 12:43:28 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <iostream>
#include <string>
#include "AMateria.h"

class AMateria;
class Ice;
class Cure;

class ICharacter
{
	protected:
			AMateria*	inventory[4];
			std::string name;
			int			idx;
	public:
	//	ICharacter();
	//	ICharacter(std::string const& name);
	//	ICharacter(const ICharacter& obj);
	//	ICharacter& operator=(const ICharacter& obj)
		virtual ~ICharacter(){}
		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif