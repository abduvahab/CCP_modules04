/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:57:50 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 12:40:32 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include <iostream>
#include <string>
#include "AMateria.h"

class AMateria;
class Ice;
class Cure;


class IMateriaSource
{
	protected:
			AMateria*	inventory[4];
			int 		id;
	
	public:
		virtual ~IMateriaSource(){}
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif