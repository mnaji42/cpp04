/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:09:48 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 15:12:22 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class IAsteroid;
class IMiningLaser;

class DeepCoreMiner: public IMiningLaser
{
    public:
		//Constructeur | Destructor
        DeepCoreMiner();
        virtual ~DeepCoreMiner();
        DeepCoreMiner(const DeepCoreMiner &D);

		//Operator
        DeepCoreMiner &operator=(DeepCoreMiner &D);

		//Fonctions
        virtual void mine(IAsteroid *IA);
};

#endif