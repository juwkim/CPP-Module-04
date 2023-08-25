/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:25:00 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 05:08:46 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource(void)
{
	// std::cout << "MateriaSource destructor called" << '\n';
	for (int i = 0; i < mSlotSize; ++i)
		delete mSlot[i];
}

MateriaSource::MateriaSource(void)
{
	// std::cout << "MateriaSource default constructor called" << '\n';
	memset(mSlot, 0, mSlotSize * sizeof(AMateria *));
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
	// std::cout << "MateriaSource copy constructor called" << '\n';
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] != NULL)
			delete mSlot[i];
		if (materiaSource.mSlot[i] == NULL)
			mSlot[i] = NULL;
		else
			mSlot[i] = materiaSource.mSlot[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource)
{
	// std::cout << "MateriaSource copy assignment operator called" << '\n';
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] != NULL)
			delete mSlot[i];
		if (materiaSource.mSlot[i] == NULL)
			mSlot[i] = NULL;
		else
			mSlot[i] = materiaSource.mSlot[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] == NULL) {
			mSlot[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] != NULL && mSlot[i]->getType() == type)
			return mSlot[i]->clone();
	}
	return NULL;
}
