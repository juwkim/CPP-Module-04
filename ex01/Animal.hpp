/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:08:41 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:34:30 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	public:
		virtual ~Animal(void);
		Animal(void);
		Animal(std::string name);
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	mType;
};
