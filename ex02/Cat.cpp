/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:14:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 12:04:16 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << '\n';
	delete mBrain;
}

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat default constructor called" << '\n';
	mBrain = new Brain();
}

Cat::Cat(const Cat& cat): Animal(cat.mType)
{
	std::cout << "Cat copy constructor called" << '\n';
	mBrain = new Brain();
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment operator called" << '\n';
	delete mBrain;
	mType = cat.mType;
	mBrain = new Brain(*cat.mBrain);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << mType << " sounds meow" << '\n';
}

Brain* Cat::getBrain(void) const
{
	return mBrain;
}
