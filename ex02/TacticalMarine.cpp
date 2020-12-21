/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:38:14 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 00:50:07 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

//Constructor | Destructor

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &TM)
{
	(void)TM;
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

//Operator

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &TM)
{
	(void)TM;
	std::cout << "Aaargh ..." << std::endl;
	std::cout << "Tactical Marine ready for action !" << std::endl;
	return *this;
}

//Fonction

TacticalMarine *TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
