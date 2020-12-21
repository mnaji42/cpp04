/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:27:47 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 16:43:20 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

//Constructor | Destructor

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; i++)
		_IM[i] = NULL;
}

MiningBarge::~MiningBarge()
{
	for (int i = 0; i < 4; i++)
		delete _IM[i];
}

MiningBarge::MiningBarge(const MiningBarge &M)
{
	for (int i = 0; i < 4; i++)
		_IM[i] = M._IM[i];
}

//Operator

MiningBarge &MiningBarge::operator=(const MiningBarge &M)
{
	if (this != &M)
	{
		for (int i = 0; i < 4; i++)
			delete _IM[i];
		for (int i = 0; i < 4; i++)
			_IM[i] = M._IM[i];
	}
	return *this;
}

//Fonctions

void MiningBarge::equip(IMiningLaser *laser)
{
	if (!_IM[3])
	{
		int i = 0;
		while (_IM[i])
			i++;
		_IM[i] = laser;
	}
	else
		delete laser;
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < 4; i++)
		if (_IM[i])
			_IM[i]->mine(asteroid);
}
