/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:38 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:20:28 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	private:
		std::string _name;
		int _apcost;
		int _damage;

	protected:
		//Accesseur
		void setName(std::string name);
		void setAPCost(int apcost);
		void setDamage(int damage);

		//Constructeur
		AWeapon();

	public:
		//Constructeur | Destructeur
		AWeapon(const std::string &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(const AWeapon &AW);

		//Operator
		AWeapon &operator=(const AWeapon &AW);

		//Accesseur
		const std::string &getName() const;
		int getAPCost() const;
		int getDamage() const;

		//Fonction
		virtual AWeapon *clone() = 0;
		virtual void attack() const = 0;
};

#endif
