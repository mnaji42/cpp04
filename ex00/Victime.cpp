/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victime.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:27:37 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 21:04:15 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victime.hpp"

//Constructeur | Destructeur

Victime::Victime() : _name("Unknow")
{
	std::cout << "A random victim called "<< _name << " just appeared!" << std::endl;
}

Victime::Victime(std::string name) : _name(name)
{
	std::cout << "A random victim called "<< _name << " just appeared!" << std::endl;
}

Victime::Victime(Victime const &V) : _name(V._name)
{
	std::cout << "A random victim called "<< _name << " just appeared!" << std::endl;
}

Victime::~Victime()
{
	std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}


//Accesseur

std::string Victime::getName() const
{
	return _name;
}

void Victime::setName(std::string name)
{
	_name = name;
}

//Operator

Victime &Victime::operator=(Victime const &V)
{
	if (this != &V)
	{
		_name = V._name;
	}
	return *this;
}


// Fonction

void Victime::getPolymorphed() const
{
    std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

//Operator de Flux

std::ostream &operator<<(std::ostream &out, Victime &V)
{
	return out << "I'm " << V.getName() << " and I like otters!";
}