/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:53:50 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 12:53:51 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_AM[4];
		int _nbAM;

		//Constructor
		Character();

	public:
		//Constructor | Destructor
		Character(std::string const &name);
		Character(Character const &C);
		virtual ~Character();

		//Operator
		Character &operator=(Character const &C);

		//Acceseur
		std::string const &getName() const;

		//Fonctions
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
