/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 18:49:28 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 21:04:08 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victime.hpp"

class	Sorcerer
{
	private :
		std::string _name;
		std::string _title;

	public :
		//Constructeur | Destructeur
		Sorcerer();
		Sorcerer(std::string name);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &S);
		virtual ~Sorcerer();

		//Accesseur
		std::string getName() const;
		std::string getTitle() const;
		void setName(std::string name);
		void setTitle(std::string title);

		//Operator
		Sorcerer &operator=(Sorcerer const &S);

		//Fonction
		void polymorph(Victime const &V) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer &S);

#endif