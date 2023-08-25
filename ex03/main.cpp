/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.iter2seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:2iter:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 05:17:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

static void test();

int main()
{
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter*	bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	test();
	return 0;
}

static void test()
{
	const int iter = 4;
	ICharacter *pi = new Character("pi");
	ICharacter *ka = new Character("ka");

	for (int i = 0; i < iter / 2; ++i) {
		pi->equip(new Ice());
		ka->equip(new Ice());
	}
	for (int i = 0; i < iter / 2; ++i) {
		pi->equip(new Cure());
		ka->equip(new Cure());
	}

	for (int i = 0; i < iter; ++i)
		pi->use(i, *ka);
	for (int i = 0; i < iter; ++i)
		ka->use(i, *pi);

	delete pi;
	delete ka;
}
