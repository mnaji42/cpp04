/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:54:08 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 12:54:08 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		//Constructor
		Cure();
		Cure(Cure const &C);
		virtual ~Cure();

		//Operator
		Cure &operator=(Cure const &C);

		//Fonctions
		AMateria *clone(void) const;
		void use(ICharacter &target);
};

#endif
