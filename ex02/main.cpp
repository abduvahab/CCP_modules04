/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:21:40 by areheman          #+#    #+#             */
/*   Updated: 2022/12/29 18:27:30 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_animal.h"

int main(void)
{
    {
        std::cout<<"#########test1 #####"<<std::endl;
      //  const A_animal*  k = new A_animal();
        const A_animal*  j = new Dog();
        const A_animal*  i = new Cat();

    //    k->makeSound();
        j->makeSound();
        i->makeSound();

    //    delete k;
        delete j;
        delete i;

        std::cout<<"#########test1 end #####"<<std::endl;
    }

    {
          std::cout<<"#########test2 #####"<<std::endl;
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
        std::cout<<"#########test2 end #####"<<std::endl;
    }
    
    {
        std::cout<<"#########test3 #####"<<std::endl;
        const A_animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
        for ( int i = 0; i < 4; i++ ) {
            delete animals[i];
        }
        std::cout<<"#########test3 end #####"<<std::endl;
    }
	return 0;
}