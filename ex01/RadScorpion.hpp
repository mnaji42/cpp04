/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:07:29 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:44:44 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	private:

	public:
		//Constructor | Destructor
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(const RadScorpion &RS);

		//Operator
		RadScorpion &operator=(const RadScorpion &RS);
};

#endif
