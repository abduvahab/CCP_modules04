/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:31:45 by areheman          #+#    #+#             */
/*   Updated: 2023/01/02 15:43:25 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure:public AMateria
{
	public:
			Cure();
			Cure(std::string const& type);
			Cure(const Cure& obj);
			Cure& operator=(const Cure& obj);
			~Cure();
			
			virtual AMateria* clone() const;
			virtual void use(ICharacter& target);
};

#endif