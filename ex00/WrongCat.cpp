/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:50:45 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:12:20 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << '\n';
}

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << '\n';
}

WrongCat::WrongCat(const WrongCat& wrongCat): WrongAnimal(wrongCat.mType)
{
	std::cout << "WrongCat copy constructor called" << '\n';
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
	std::cout << "WrongCat copy assignment operator called" << '\n';
	mType = wrongCat.mType;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << mType << " sounds meow" << '\n';
}
