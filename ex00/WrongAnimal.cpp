/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:50:03 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:10:22 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << '\n';
}

WrongAnimal::WrongAnimal(void): mType("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << '\n';
}

WrongAnimal::WrongAnimal(std::string name): mType(name)
{
	std::cout << "WrongAnimal string constructor called" << '\n';
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal):
	mType(wrongAnimal.mType)
{
	std::cout << "WrongAnimal copy constructor called" << '\n';
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	std::cout << "WrongAnimal copy assignment operator called" << '\n';
	mType = wrongAnimal.mType;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return mType;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << mType << " is crying" << '\n';
}
