/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:53:41 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 13:20:21 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Constructor | Destructor

Character::Character(std::string const &name): _name(name), _nbAM(0)
{
	for (int i = 0; i < 4; i++)
		_AM[i] = nullptr;
}

Character::Character(Character const &C): _name(C._name), _nbAM(0)
{
	for (int i = 0; i < C._nbAM; i++)
		equip(C._AM[i]->clone());
	for (int i = _nbAM; i < 4; i++)
		_AM[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < _nbAM; i++)
		delete _AM[i];
}

//Operator

Character &Character::operator=(Character const &C)
{
	_name = C._name;
	for (int i = 0; i < _nbAM; i++)
		delete _AM[i];
	_nbAM = 0;
	for (int i = 0; i < C._nbAM; i++)
		equip(C._AM[i]->clone());
	for (int i = _nbAM; i < 4; i++)
		_AM[i] = nullptr;
	return (*this);
}

//Accesseur

std::string const &Character::getName(void) const
{
	return (_name);
}

//Fonctions

void Character::equip(AMateria *m)
{
	if (_nbAM == 4 || m == nullptr)
		return ;
	for (int i = 0; i < _nbAM; i++)
		if (_AM[i] == m)
			return ;
	_AM[_nbAM++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= _nbAM || _AM[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		_AM[i] = _AM[i + 1];
		_AM[i + 1] = nullptr;
	}
	_nbAM--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= _nbAM || _AM[idx] == nullptr)
		return ;
	_AM[idx]->use(target);
}
