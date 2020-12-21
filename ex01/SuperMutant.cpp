/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:55 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:40:39 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

//Constructor | Destructor

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &SM): Enemy(SM.getHP(), SM.getType())
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

//Operator

SuperMutant &SuperMutant::operator=(const SuperMutant &SM)
{
	if (this != &SM)
	{
		setHP(SM.getHP());
		setType(SM.getType());
	}
	return *this;
}

//Fonction

void SuperMutant::takeDamage(int damage)
{
	if (damage < 3)
		damage = 3;
	Enemy::takeDamage(damage - 3);
}
