/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:07:01 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:45:09 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

//Constructor | Destructor

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &RS): Enemy(RS.getHP(), RS.getType())
{
	std::cout << "* click click click *" << std::endl;
}

//Operator

RadScorpion &RadScorpion::operator=(const RadScorpion &RS)
{
	if (this != &RS)
	{
		std::cout << "* SPROTCH *" << std::endl;
		setHP(RS.getHP());
		setType(RS.getType());
		std::cout << "* click click click *" << std::endl;
	}
	return *this;
}