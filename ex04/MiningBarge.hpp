/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:27:55 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 16:31:40 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"

class MiningBarge
{
    private:
        IMiningLaser *_IM[4];

    public:
		// Constructor | Destructor
        MiningBarge();
        ~MiningBarge();
        MiningBarge(const MiningBarge &M);

		//Operator
        MiningBarge &operator=(const MiningBarge &M);

		//Fonctions
        void equip(IMiningLaser *laser);
        void mine(IAsteroid *asteroid) const;
};

#endif