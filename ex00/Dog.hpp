/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:14:37 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:03:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		virtual ~Dog(void);
		Dog(void);
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);

		void makeSound(void) const;
};
