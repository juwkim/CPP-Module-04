/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:20:06 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:38:04 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

class Brain
{
	public:
		virtual ~Brain(void);
		Brain(void);
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);

		std::string	getIdea(const int idx) const;
		void		setIdea(const int idx, const std::string idea);
		void		fill(const std::string idea);
		void		show(void) const;

	private:
		static const int mIdeasSize = 100;
		std::string	mIdeas[mIdeasSize];
};
