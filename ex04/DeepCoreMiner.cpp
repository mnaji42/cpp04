/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:09:56 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 15:14:31 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "IAsteroid.hpp"

//Constructor | Destructor

DeepCoreMiner::DeepCoreMiner()
{

}

DeepCoreMiner::~DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &D)
{
	(void)D;
}

//Operator

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner &D)
{
	(void)D;
	return *this;
}

//Fonctions

void DeepCoreMiner::mine(IAsteroid *IA)
{
	std::cout << "* mining deep ... got " << IA->beMined(this) << " ! *" << std::endl;
}
