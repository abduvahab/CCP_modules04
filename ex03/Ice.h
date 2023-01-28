/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:30:05 by areheman          #+#    #+#             */
/*   Updated: 2023/01/02 15:42:10 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice:public AMateria
{
	public:
			Ice();
			Ice(std::string const& type);
			Ice(const Ice& obj);
			Ice& operator=(const Ice& obj);
			~Ice();
			
			virtual AMateria* clone() const;
			virtual void use(ICharacter& target);
};

#endif