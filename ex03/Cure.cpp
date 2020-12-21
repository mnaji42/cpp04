/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:53:59 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 13:20:11 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//Constructor | Destructor

Cure::Cure(): AMateria("cure")
{

}

Cure::Cure(Cure const &C): AMateria("cure")
{
	_xp = C._xp;
}

Cure::~Cure()
{

}

//Operator

Cure &Cure::operator=(Cure const &C)
{
	_xp = C._xp;
	return *this;
}

//Fonctions

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return cpy;
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
