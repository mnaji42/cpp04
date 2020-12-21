/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victime.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:27:48 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 21:16:36 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIME_HPP
# define VICTIME_HPP

# include <iostream>

class	Victime
{
	protected :
		std::string _name;

	public :
		//Constructeur | Destructeur
		Victime();
		Victime(std::string name);
		Victime(Victime const &V);
		virtual ~Victime();

		//Accesseur
		std::string getName() const;
		void setName(std::string name);

		//Operator
		Victime &operator=(Victime const &V);

		//Fonction
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victime &V);

#endif