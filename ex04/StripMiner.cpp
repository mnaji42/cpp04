/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:18:09 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 15:19:16 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"
#include "IAsteroid.hpp"

//Constructor | Destructor

StripMiner::StripMiner()
{

}

StripMiner::~StripMiner()
{

}

StripMiner::StripMiner(const StripMiner &D)
{
	(void)D;
}

//Operator

StripMiner &StripMiner::operator=(StripMiner &D)
{
	(void)D;
	return *this;
}

//Fonctions

void StripMiner::mine(IAsteroid *IA)
{
	std::cout << "* strip mining ... got " << IA->beMined(this) << " ! *" << std::endl;
}