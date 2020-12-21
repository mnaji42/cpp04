/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:23:45 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 15:25:44 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include "IAsteroid.hpp"

class Asteroid: public IAsteroid
{
	public:
		//Constructor | Destructor
		Asteroid();
		virtual ~Asteroid();
		Asteroid(const Asteroid &A);

		//Operator
		Asteroid &operator=(const Asteroid &A);

		//Acceseur
		virtual std::string getName() const;

		//Fonctions
		virtual std::string beMined(DeepCoreMiner *D) const;
		virtual std::string beMined(StripMiner *S) const;
};

#endif