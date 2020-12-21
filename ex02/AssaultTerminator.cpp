/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:38:09 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 00:54:56 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

//Constructor | Destructor

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &AT)
{
	(void)AT;
	std::cout << "* teleports from space *" << std::endl;
}

//Operator

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &AT)
{
	(void)AT;
	std::cout << "I’ll be back ..." << std::endl;
	std::cout << "* teleports from space *" << std::endl;
	return *this;
}

//Fonction

AssaultTerminator *AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
