/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:48 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:27:10 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	private:

	public:
		//Constructeur | Destructeur
		PowerFist();
		virtual ~PowerFist();
		PowerFist(const PowerFist &PF);

		//Operator
		PowerFist &operator=(const PowerFist &PF);

		//Fonction
		virtual PowerFist *clone();
		virtual void attack() const;
};

#endif