/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:19:26 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 12:21:27 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "Character.h"

class ICharacter;

class AMateria
{
	protected:
			std::string type;

	public:
			AMateria();
			AMateria(std::string const& type);
			AMateria(const AMateria& obj);
			virtual ~AMateria();
			
			AMateria& operator=(const AMateria& obj);
			std::string const& getType() const; // return the materia type
			virtual AMateria* clone() const =0;
			virtual void use(ICharacter& target);
};

#endif