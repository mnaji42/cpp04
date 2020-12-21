/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:46 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:27:49 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

//Constructeur | Destructeur

PowerFist::PowerFist(): AWeapon("Power fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

PowerFist::PowerFist(const PowerFist &PF): AWeapon(PF.getName(), PF.getAPCost(), PF.getDamage())
{

}

//Operator

PowerFist &PowerFist::operator=(const PowerFist &PF)
{
	if (this != &PF)
	{
		setName(PF.getName());
		setAPCost(PF.getAPCost());
		setDamage(PF.getDamage());
	}
	return *this;
}

//Fonction

PowerFist *PowerFist::clone()
{
	return new PowerFist(*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
