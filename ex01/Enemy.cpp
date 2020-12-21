/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:50 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 23:27:15 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

//Constructor | Destructor

Enemy::Enemy()
{

}

Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type)
{

}

Enemy::~Enemy()
{
	
}

Enemy::Enemy(const Enemy &c): _hp(c._hp), _type(c._type)
{

}

//Operator

Enemy &Enemy::operator=(const Enemy &E)
{
	if (this != &E)
	{
		_hp = E._hp;
		_type = E._type;
	}
	return *this;
}

//Accesseur

const std::string &Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}

void Enemy::setType(const std::string &type)
{
	_type = type;
}

void Enemy::setHP(int hp)
{
	_hp = hp;
}

//Fonctions

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	_hp -= damage;
	if (_hp < 0)
		_hp = 0;
}