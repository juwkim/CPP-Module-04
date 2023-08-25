/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:13:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:35:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		virtual ~Cat(void);
		Cat(void);
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);

		void makeSound(void) const;
		Brain* getBrain(void) const;
	
	private:
		Brain	*mBrain;
};
