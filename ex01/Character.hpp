/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:07:32 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 23:04:37 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
		std::string _name;
		int _ap;
		AWeapon *_weapon;
		
		//Constructor
		Character();
    
    public:
		//Constructor || Destructor
		Character(const std::string &name);
		~Character();
		Character(const Character &C);

		//Operator
		Character &operator=(const Character &C);

		//Accesseur

		const std::string &getName() const;
		const AWeapon *getWeapon() const;
		int getAP() const;

		//Fonctions

		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
};

std::ostream &operator<<(std::ostream &out, const Character &c);

#endif
