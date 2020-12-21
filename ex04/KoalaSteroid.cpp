/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:24:14 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 16:27:02 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

//Constructor | Destructor

Comet::Comet()
{

}

Comet::~Comet()
{

}

Comet::Comet(const Comet &A)
{
	(void)A;
}

//Operator

Comet &Comet::operator=(const Comet &A)
{
	(void)A;
	return *this;
}

std::string Comet::getName() const
{
	return "Comet";
}

std::string Comet::beMined(DeepCoreMiner *D) const
{
	(void)D;
	return "Mithril";
}

std::string Comet::beMined(StripMiner *S) const
{
	(void)S;
	return "Tartarite";
}
