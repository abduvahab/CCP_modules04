/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:03:22 by areheman          #+#    #+#             */
/*   Updated: 2022/12/29 17:00:11 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include "string"
#include "iostream"

class Brain
{
	std::string ideas[100];	

	public:
		Brain();
		Brain(const std::string ideas[100]);
		Brain(const Brain& obj);
		~Brain();
		
		Brain& operator=(const Brain& obj);
		void	setIdeas(const std::string ideas[100]);
		void	showIdeas();
};

#endif