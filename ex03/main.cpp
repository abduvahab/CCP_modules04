/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:49:09 by areheman          #+#    #+#             */
/*   Updated: 2023/01/03 16:35:41 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"
#include "ICharacter.h"
#include "AMateria.h"
#include "Cure.h"
#include "Ice.h"
#include "MateriaSource.h"


int main(void)
{

	{
		std::cout<<"#####  test1  #####"<<std::endl;
		
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		
		std::cout<<"#####  test1 end  #####"<<std::endl;
	}

	{
		std::cout<<"#####  test2   #####"<<std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		Character* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
	//	me->unequip(2);
		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		
		
		delete me;
		delete bob;
		delete src;

		std::cout<<"#####test2 end#####"<<std::endl;
	}
	
	return 0;
}
