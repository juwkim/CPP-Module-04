/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:22:15 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 05:34:59 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure(void)
{
	// std::cout << "Cure destructor called" << '\n';
}

Cure::Cure(void):
	AMateria("cure")
{
	// std::cout << "Cure default constructor called" << '\n';
}

Cure::Cure(const Cure& cure):
	AMateria(cure.mType)
{
	// std::cout << "Cure copy constructor called" << '\n';
}

Cure& Cure::operator=(const Cure& cure)
{
	// std::cout << "Cure copy assignment operator called" << '\n';
	mType = cure.mType;
	return *this;
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << '\n';
}
