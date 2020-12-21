/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:54:54 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 13:27:12 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _nbAM(0)
{
	for (int i = 0; i < 4; i++)
		_AM[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &MS): _nbAM(0)
{
	for (int i = 0; i < MS._nbAM; i++)
		learnMateria(MS._AM[i]->clone());
	for (int i = 0; i < 4; i++)
		_AM[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _nbAM; i++)
		delete _AM[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &MS)
{
	for (int i = 0; i < _nbAM; i++)
		delete _AM[i];
	_nbAM = 0;
	for (int i = 0; i < MS._nbAM; i++)
		learnMateria(MS._AM[i]->clone());
	for (int i = 0; i < 4; i++)
		_AM[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_nbAM  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < _nbAM; i++)
		if (_AM[i] == m)
			return ;
	_AM[_nbAM++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _nbAM; i++)
		if (_AM[i]->getType() == type)
			return (_AM[i]->clone());
	return (nullptr);
}
