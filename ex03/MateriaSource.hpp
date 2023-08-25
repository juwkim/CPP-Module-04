/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:24:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 05:00:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		virtual ~MateriaSource(void);
		MateriaSource(void);
		MateriaSource(const MateriaSource& materiaSource);
		MateriaSource& operator=(const MateriaSource& materiaSource);

		void learnMateria(AMateria *m);
		AMateria* createMateria(const std::string& type);
	private:
		static const int mSlotSize = 4;
		AMateria* mSlot[mSlotSize];
};
