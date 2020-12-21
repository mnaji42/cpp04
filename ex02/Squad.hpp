/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:38:22 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 01:14:06 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		struct node 
		{
			ISpaceMarine *el;
			node *next;
		};
		node *_lst;
		int _count;

	public:
		// Constructor | Destructor
		Squad();
		virtual ~Squad();
		Squad(const Squad &s);

		//Operator
		Squad &operator=(const Squad &s);

		//Accesseur
		virtual int getCount() const;
		virtual ISpaceMarine *getUnit(int unit) const;

		//Fonction List
		virtual int push(ISpaceMarine *el);
		node *lst_deep_cpy(node *node);
		void lst_destroy(node *node);
};

#endif