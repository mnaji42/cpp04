/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:53:29 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 12:53:31 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	private:
		//Constructeur
		AMateria();

	protected:
		std::string _type;
		unsigned int _xp;

	public:
		//Constructeur | Destructeur
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &AM);

		//Operator
		AMateria &operator=(AMateria const &AM);

		// Acceseur
		std::string const &getType(void) const;
		unsigned int getXP(void) const;

		//Fonctions
		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target);
};

#endif
