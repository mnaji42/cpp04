/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:43 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:25:57 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	private:

	public:
		//Constructeur | Destructor
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &PS);

		//Operator
		PlasmaRifle &operator=(const PlasmaRifle &PS);

		//Fonction
		virtual PlasmaRifle *clone();
		virtual void attack() const;
};

#endif