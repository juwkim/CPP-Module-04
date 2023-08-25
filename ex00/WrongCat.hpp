/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:51:00 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:11:13 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		virtual ~WrongCat(void);
		WrongCat(void);
		WrongCat(const WrongCat& wrongCat);
		WrongCat& operator=(const WrongCat& wrongCat);

		void	makeSound(void) const;
};
