/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:23:03 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 05:10:47 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice(void)
{
	// std::cout << "Ice destructor called" << '\n';
}

Ice::Ice(void):
	AMateria("ice")
{
	// std::cout << "Ice default constructor called" << '\n';
}

Ice::Ice(const Ice& ice):
	AMateria(ice.mType)
{
	// std::cout << "Ice copy constructor called" << '\n';
}

Ice& Ice::operator=(const Ice& ice)
{
	// std::cout << "Ice copy assignment operator called" << '\n';
	mType = ice.mType;
	return *this;
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << '\n';
}
