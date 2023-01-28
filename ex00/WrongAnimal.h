/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:52:18 by areheman          #+#    #+#             */
/*   Updated: 2022/12/28 12:42:50 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
			std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal& obj);
		~WrongAnimal();
		
		WrongAnimal& operator=(const WrongAnimal& obj);
		void	makeSound()const;
		std::string getType() const ;			
};

class WrongDog:public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const std::string type);
		WrongDog(const WrongDog& obj);
		~WrongDog();
		
		WrongDog& operator=(const WrongDog& obj);
		void	makeSound()const;
	//	std::string& getType();	
};

class WrongCat:public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const std::string type);
		WrongCat(const WrongCat& obj);
		~WrongCat();
		
		WrongCat& operator=(const WrongCat& obj);
		void	makeSound() const;	
	//	std::string& getType();		
};


#endif