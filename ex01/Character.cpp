/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:07:35 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 23:36:32 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Constructor | Destructor

Character::Character()
{

}

Character::Character(const std::string &name): _name(name), _ap(40), _weapon(NULL)
{

}

Character::~Character()
{
	
}

Character::Character(const Character &C): _name(C._name), _ap(C._ap), _weapon(C._weapon->clone())
{

}

//Operator

Character &Character::operator=(const Character &C)
{
	if (this != &C)
	{
		_name = C._name;
		_ap = C._ap;
		_weapon = C._weapon->clone();
	}
	return *this;
}

//Acesseur

const std::string &Character::getName() const
{
	return _name;
}

const AWeapon *Character::getWeapon() const
{
	return _weapon;
}

int Character::getAP() const
{
	return _ap;
}

//Fonctions

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_weapon && _ap >= _weapon->getAPCost())
	{
		_ap -= _weapon->getAPCost();
		std::cout << _name << " attacque " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->setHP(enemy->getHP() - _weapon->getDamage());
		if (enemy->getHP() <= 0)
		{
			delete enemy;
			enemy = nullptr;
		}
	}
}

//Operator de flux

std::ostream &operator<<(std::ostream &out, const Character &c)
{
	if (c.getWeapon())
		return out << c.getName() << " has " << c.getAP() << " AP and carries a " << c.getWeapon()->getName() << std::endl;
	return out << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
}