/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:23:42 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 16:22:20 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

//Constructor | Destructor

Asteroid::Asteroid()
{

}

Asteroid::~Asteroid()
{

}

Asteroid::Asteroid(const Asteroid &A)
{
	(void)A;
}

//Operator

Asteroid &Asteroid::operator=(const Asteroid &A)
{
	(void)A;
	return *this;
}

std::string Asteroid::getName() const
{
	return "Asteroid";
}

std::string Asteroid::beMined(DeepCoreMiner *D) const
{
	(void)D;
	return "Dragonite";
}

std::string Asteroid::beMined(StripMiner *S) const
{
	(void)S;
	return "Flavium";
}
