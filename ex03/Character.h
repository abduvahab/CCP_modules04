/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:18:49 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 12:19:33 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class ICharacter;
class AMateria;
class Ice;
class Cure;

class Character:public ICharacter
{
	private:
		Character();
	public:
		Character(std::string const& name);
		Character(const Character& obj);
		Character& operator=(const Character& obj);
		~Character();
		virtual std::string const& getName()const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif