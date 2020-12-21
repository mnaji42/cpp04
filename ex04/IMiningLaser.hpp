/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:29:20 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 14:33:03 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMINIGLASER_HPP
# define IMINIGLASER_HPP

#include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif