/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:21:40 by areheman          #+#    #+#             */
/*   Updated: 2022/12/29 18:12:41 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

int main(void)
{
	const Animal*  j = new Dog();
	const Animal*  i = new Cat();

	delete j;
	delete i;

    std::string* p =new std::string[100];
    for (int i = 0 ; i< 100; i++)
    {
        p[i] = "a" + std::to_string(i);
    }
    Brain* b= new Brain(p);
	 Dog basic(b);
    
    {
        
        std::cout<<"#########test deep copy"<<std::endl;
        Dog tmp = basic;
        (*(tmp.getBrain())).showIdeas();
        
        std::cout<<"###########test deep copy end"<<std::endl;
    }
    delete b;
    delete[] p;
    

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

	return 0;
}