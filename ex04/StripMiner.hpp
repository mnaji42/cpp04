/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:16:20 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 15:17:12 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIP_MINER_HPP
# define STRIP_MINER_HPP

# include "IMiningLaser.hpp"

class IAsteroid;
class IMiningLaser;

class StripMiner: public IMiningLaser
{
    public:
		//Constructeur | Destructor
        StripMiner();
        virtual ~StripMiner();
        StripMiner(const StripMiner &D);

		//Operator
        StripMiner &operator=(StripMiner &D);

		//Fonctions
        virtual void mine(IAsteroid *IA);
};

#endif