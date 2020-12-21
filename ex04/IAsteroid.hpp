/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:29:37 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 15:16:24 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

#include <iostream>

class StripMiner;
class DeepCoreMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(DeepCoreMiner *miner) const = 0;
		virtual std::string beMined(StripMiner *miner) const = 0;
		virtual std::string getName() const = 0;
};

#endif