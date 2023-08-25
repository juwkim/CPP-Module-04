/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:21:54 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 04:10:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		virtual ~Cure(void);
		Cure(void);
		Cure(const Cure& cure);
		Cure& operator=(const Cure& cure);

		Cure* clone() const;
		void use(ICharacter& target);
};
