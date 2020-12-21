/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 18:52:40 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 21:07:57 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


//Constructeur | Destructeur

Sorcerer::Sorcerer() : _name("Unknow"), _title("Default")
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name) : _name(name), _title("Default")
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &S) : _name(S._name), _title(S._title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ",  is dead. Consequences will never be the same!" << std::endl;
}


//Accesseur

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

void Sorcerer::setName(std::string name)
{
	_name = name;
}

void Sorcerer::setTitle(std::string title)
{
	_title = title;
}

//Operator

Sorcerer &Sorcerer::operator=(Sorcerer const &S)
{
	if (this != &S)
	{
		_name = S._name;
		_title = S._title;
	}
	return *this;
}

//Fonction

void Sorcerer::polymorph(Victime const &V) const
{
	V.getPolymorphed();
}

//Operator de Flux

std::ostream &operator<<(std::ostream &out, Sorcerer &S)
{
	return out << "I am " << S.getName() << ", " << S.getTitle() << ", and i like ponies!";
}