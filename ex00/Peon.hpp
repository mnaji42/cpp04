/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:14:42 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 21:55:11 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victime.hpp"

class Peon : public Victime
{
	private :

	public :
		Peon();
		Peon(std::string name);
		virtual ~Peon();

		virtual void getPolymorphed() const;
};

#endif