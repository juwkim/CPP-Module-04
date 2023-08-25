/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:21:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 05:36:08 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(void)
{
	// std::cout << "Character destructor called" << '\n';
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] != NULL)
			delete mSlot[i];
	}
}

Character::Character(void):
	mName("character")
{
	// std::cout << "Character default constructor called" << '\n';
	memset(mSlot, 0, mSlotSize * sizeof(AMateria *));
}

Character::Character(const std::string& name):
	mName(name)
{
	// std::cout << "Character string constructor called" << '\n';
	memset(mSlot, 0, mSlotSize * sizeof(AMateria *));
}


Character::Character(const Character& character):
	mName(character.mName)
{
	// std::cout << "Character copy constructor called" << '\n';
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] != NULL)
			delete mSlot[i];
		if (character.mSlot[i] == NULL)
			mSlot[i] = NULL;
		else
			mSlot[i] = character.mSlot[i]->clone();
	}
}

Character& Character::operator=(const Character& character)
{
	// std::cout << "Character copy assignment operator called" << '\n';
	mName = character.mName;
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] != NULL)
			delete mSlot[i];
		if (character.mSlot[i] == NULL)
			mSlot[i] = NULL;
		else
			mSlot[i] = character.mSlot[i]->clone();
	}
	return *this;
}

const std::string& Character::getName(void) const
{
	return mName;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < mSlotSize; ++i) {
		if (mSlot[i] == NULL) {
			mSlot[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx < mSlotSize)
		mSlot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx < mSlotSize) {
		if (mSlot[idx] != NULL)
			mSlot[idx]->use(target);
	}
}
