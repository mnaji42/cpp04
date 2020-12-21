/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:38:19 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 01:15:33 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

//Constructor | Destructor

Squad::Squad(): _lst(NULL), _count(0)
{
}

Squad::~Squad()
{
	lst_destroy(_lst);
}

Squad::Squad(const Squad &s): _lst(lst_deep_cpy(s._lst)), _count(s._count)
{
}

//Operator

Squad &Squad::operator=(const Squad &s)
{
	if (this != &s)
	{
		lst_destroy(_lst);
		_lst = lst_deep_cpy(s._lst);
		_count = s._count;
	}
	return *this;
}

//Accesseur

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine *Squad::getUnit(int unit) const
{
	Squad::node *node = _lst;
	for (int i = 0; i != unit && node; i++)
		node = node->next;
	return node ? node->el : NULL;
}

//Fonction List

int Squad::push(ISpaceMarine *el)
{
	if (!el)
		return _count;
	for (Squad::node *n = _lst; n; n = n->next)
		if (el == n->el)
			return _count;
	Squad::node **node = &_lst;
	while (*node)
		node = &(*node)->next;
	*node = new Squad::node((Squad::node) { el, NULL });
	return ++_count;
}

Squad::node *Squad::lst_deep_cpy(Squad::node *node)
{
	if (!node)
		return NULL;
	return new Squad::node((Squad::node) { node->el->clone(), lst_deep_cpy(node->next) });
}

void Squad::lst_destroy(Squad::node *node)
{
	if (!node)
		return;
	delete node->el;
	lst_destroy(node->next); 
	delete node;
}