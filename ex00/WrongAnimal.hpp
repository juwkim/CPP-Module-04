/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:50:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:09:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	public:
		virtual ~WrongAnimal(void);
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal& wrongAnimal);
		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);

		std::string	getType(void) const;
		void		makeSound(void) const;
	protected:
		std::string	mType;
};
