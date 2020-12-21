/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:41 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:26:34 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &PS):	AWeapon(PS.getName(), PS.getAPCost(), PS.getDamage())
{

}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &PS)
{
	setName(PS.getName());
	setAPCost(PS.getAPCost());
	setDamage(PS.getDamage());
	return *this;
}

PlasmaRifle *PlasmaRifle::clone()
{
	return new PlasmaRifle(*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
