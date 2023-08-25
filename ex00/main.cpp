/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:12:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:18:27 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{ 
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << '\n';
	std::cout << i->getType() << " " << '\n';
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal*	meta = new WrongAnimal();
	const WrongAnimal*	i = new WrongCat();

	std::cout << i->getType() << " " << '\n';
	i->makeSound();
	meta->makeSound();

	delete meta;
	delete i;

	return 0;
}
