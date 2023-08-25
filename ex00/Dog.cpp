/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:14:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:06:26 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << '\n';
}

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog default constructor called" << '\n';
}

Dog::Dog(const Dog& dog): Animal(dog.mType)
{
	std::cout << "Dog copy constructor called" << '\n';
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called" << '\n';
	mType = dog.mType;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << mType << " sounds bark" << '\n';
}
