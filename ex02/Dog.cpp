/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:14:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 12:05:29 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << '\n';
	delete mBrain;
}

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog default constructor called" << '\n';
	mBrain = new Brain();
}

Dog::Dog(const Dog& dog): Animal(dog.mType)
{
	std::cout << "Dog copy constructor called" << '\n';
	mBrain = new Brain();
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called" << '\n';
	delete mBrain;
	mType = dog.mType;
	mBrain = new Brain(*dog.mBrain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << mType << " sounds bark" << '\n';
}

Brain* Dog::getBrain(void) const
{
	return mBrain;
}
