/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:54:15 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 13:19:52 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//Constructor | Destructor

Ice::Ice(): AMateria("ice")
{

}

Ice::Ice(Ice const &C): AMateria("ice")
{
	_xp = C._xp;
}

Ice::~Ice()
{

}

//Operator

Ice &Ice::operator=(Ice const &C)
{
	_xp = C._xp;
	return *this;
}

//Fonctions

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice(*this);
	return cpy;
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
