/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:06:53 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:32:50 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:
		int _hp;
		std::string _type;

	protected:
		//Constructeur
		Enemy();

		//Accesseur
		void setType(const std::string &type);

    public:
		//Constructeur | Destructeur
		Enemy(int hp, const std::string &type);
		virtual ~Enemy();
		Enemy(const Enemy &c);

		//Operator
		Enemy &operator=(const Enemy &E);

		//Accesseur
		const std::string &getType() const;
		int getHP() const;
		void setHP(int hp);

		//Fonction
		virtual void takeDamage(int damage);
};

#endif