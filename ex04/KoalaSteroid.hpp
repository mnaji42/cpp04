/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:24:07 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 16:25:37 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOALA_STEROID_HPP
# define KOALA_STEROID_HPP

# include "IAsteroid.hpp"

class Comet: public IAsteroid
{
	public:
		//Constructor | Destructor
		Comet();
		virtual ~Comet();
		Comet(const Comet &A);

		//Operator
		Comet &operator=(const Comet &A);

		//Acceseur
		virtual std::string getName() const;

		//Fonctions
		virtual std::string beMined(DeepCoreMiner *D) const;
		virtual std::string beMined(StripMiner *S) const;
};

#endif