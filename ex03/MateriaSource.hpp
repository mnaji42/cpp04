/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:55:01 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 13:26:45 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int _nbAM;
		AMateria *_AM[4];

	public:
		//Constructor | Destructor
		MateriaSource();
		MateriaSource(MateriaSource const &MS);
		virtual ~MateriaSource();

		//Operator
		MateriaSource &operator=(MateriaSource const &MS);

		//Fonctions
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
};

#endif
