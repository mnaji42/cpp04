/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:22:33 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 22:01:47 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer S1;
	Sorcerer S2("Damian");
	Sorcerer S3("Julien", "Mage");
	Sorcerer S4(S3);
	
	std::cout << S1 << std::endl;
	std::cout << S2 << std::endl;
	std::cout << S3 << std::endl;
	std::cout << S4 << std::endl;
	S1 = S3;
	std::cout << S1 << std::endl;

	Victime V1;
	Victime V2("Babar");
	Victime V3(V2);

	std::cout << V1 << std::endl;
	std::cout << V2 << std::endl;
	std::cout << V3 << std::endl;
	V1 = V3;
	std::cout << V1 << std::endl;

	S2.polymorph(V2);
	S4.polymorph(V1);

	Peon P1;
	Peon P2("Dumbo");
	Peon P3(P2);

	std::cout << P1 << std::endl;
	std::cout << P2 << std::endl;
	std::cout << P3 << std::endl;
	P1 = P3;
	std::cout << P1 << std::endl;

	S2.polymorph(P2);
	S4.polymorph(P1);
	return (0);
}

// int main()
// {
// 	Sorcerer robert("Robert", "the Magnificent");
// 	Victime jim("Jimmy");
// 	Peon joe("Joe");
// 	std::cout << robert << jim << joe;
// 	robert.polymorph(jim);
// 	robert.polymorph(joe);
// 	return 0;
// }