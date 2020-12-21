/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:35:20 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/05 16:44:24 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

int main()
{
	Asteroid *A = new Asteroid();
    Comet *C = new Comet();
    MiningBarge B;

	B.equip(new StripMiner());
    B.equip(new DeepCoreMiner());
    B.equip(new DeepCoreMiner());
    B.equip(new StripMiner());
	B.equip(new StripMiner());

    B.mine(A);
    B.mine(C);

    B.equip(new StripMiner());

    B.mine(A);
    B.mine(C);

    delete A;
    delete C;
}
