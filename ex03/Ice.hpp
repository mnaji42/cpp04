/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:54:23 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 12:54:24 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		//Constructor
		Ice();
		Ice(Ice const &C);
		virtual ~Ice();

		//Operator
		Ice &operator=(Ice const &C);

		//Fonctions
		AMateria *clone(void) const;
		void use(ICharacter &target);
};

#endif
