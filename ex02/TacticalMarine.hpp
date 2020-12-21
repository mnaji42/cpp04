/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:38:16 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 00:50:53 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		//Constructor | Destructor
		TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine(const TacticalMarine &TM);

		//Operator
		TacticalMarine &operator=(const TacticalMarine &TM);

		//Fonctions
		virtual TacticalMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif