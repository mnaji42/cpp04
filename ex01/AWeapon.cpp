/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:34 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 23:36:59 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

//Constructeur | Destructeur

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(const std::string &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::~AWeapon()
{
	
}

AWeapon::AWeapon(const AWeapon &AW): _name(AW._name), _apcost(AW._apcost), _damage(AW._damage)
{

}

//Operator

AWeapon &AWeapon::operator=(const AWeapon &AW)
{
	if (this != &AW)
	{
		_name = AW._name;
		_apcost = AW._apcost;
		_damage = AW._damage;
	}
	return *this;
}

//Accesseur

const std::string &AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}

void AWeapon::setName(std::string name)
{
	_name = name;
}

void AWeapon::setAPCost(int apcost)
{
	_apcost = apcost;
}

void AWeapon::setDamage(int damage)
{
	_damage = damage;
}
