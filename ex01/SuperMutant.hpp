/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:58 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:37:44 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	private:

	public:
		//Constructor | Destructor
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant(const SuperMutant &SM);

		//Operator
		SuperMutant &operator=(const SuperMutant &SM);

		//Fonctions
		virtual void takeDamage(int damage);
};

#endif