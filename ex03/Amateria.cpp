/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:20:35 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 05:07:28 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::~AMateria(void)
{
	// std::cout << "AMateria destructor called" << '\n';
}

AMateria::AMateria(void):
	mType("amateria")
{
	// std::cout << "AMateria default constructor called" << '\n';
}

AMateria::AMateria(const std::string& type):
	mType(type)
{
	// std::cout << "AMateria string constructor called" << '\n';
}

AMateria::AMateria(const AMateria& aMateria):
	mType(aMateria.mType)
{
	// std::cout << "AMateria copy constructor called" << '\n';
}

AMateria& AMateria::operator=(const AMateria& aMateria)
{
	// std::cout << "AMateria copy assignment operator called" << '\n';
	mType = aMateria.mType;
	return *this;
}

const std::string& AMateria::getType(void) const
{
	return mType;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria: \"* uses " << target.getName() << " *\"" << '\n';
}
