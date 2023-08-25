/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:09:21 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 10:57:41 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << '\n';
}

Animal::Animal(void): mType("Animal")
{
	std::cout << "Animal default constructor called" << '\n';
}

Animal::Animal(std::string name): mType(name)
{
	std::cout << "Animal string constructor called" << '\n';
}

Animal::Animal(const Animal& animal): mType(animal.mType)
{
	std::cout << "Animal copy constructor called" << '\n';
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal copy assignment operator called" << '\n';
	mType = animal.mType;
	return *this;
}

std::string	Animal::getType(void) const
{
	return mType;
}

void Animal::makeSound(void) const
{
	std::cout << mType << " is crying" << '\n';
}
