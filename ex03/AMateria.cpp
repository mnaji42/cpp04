/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:32:59 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 13:20:06 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//Constructor | Destructor

AMateria::AMateria(std::string const &type): _type(type), _xp(0)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria const &AM)
{
	_type = AM._type;
	_xp = AM._xp;
}

//Operator

AMateria &AMateria::operator=(AMateria const &AM)
{
	if (this != &AM)
	{
		_type = AM._type;
		_xp = AM._xp;
	}
	return *this;
}

//Acceseur

std::string const &AMateria::getType(void) const
{
	return _type;
}

unsigned int AMateria::getXP(void) const
{
	return _xp;
}

//Fonctions

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
