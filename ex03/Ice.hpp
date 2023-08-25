/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:22:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/26 04:16:55 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		virtual ~Ice(void);
		Ice(void);
		Ice(const Ice& ice);
		Ice& operator=(const Ice& ice);

		Ice* clone() const;
		void use(ICharacter& target);
};
