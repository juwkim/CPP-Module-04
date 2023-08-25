/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:21:07 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 04:48:15 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <cstring>

class Character: public ICharacter
{
	public:
		virtual ~Character(void);
		Character(void);
		Character(const std::string& name);
		Character(const Character& character);
		Character& operator=(const Character& character);

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		static const int mSlotSize = 4;
		AMateria* mSlot[mSlotSize];
		std::string	mName;
};
