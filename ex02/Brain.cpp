/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:19:45 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 12:06:17 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << '\n';
}

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << '\n';
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << '\n';
	for (int i = 0; i < mIdeasSize; ++i)
		mIdeas[i] = brain.mIdeas[i];
}

Brain&	Brain::operator=(const Brain& brain)
{
	std::cout << "Brain copy assignment operator called" << '\n';
	for (int i = 0; i < mIdeasSize; ++i)
		mIdeas[i] = brain.mIdeas[i];
	return *this;
}

std::string	Brain::getIdea(int idx) const
{
	return mIdeas[idx];
}

void Brain::setIdea(const int idx, const std::string idea)
{
	mIdeas[idx] = idea;
}

void Brain::fill(const std::string idea)
{
	for (int i = 0; i < mIdeasSize; ++i)
		mIdeas[i] = idea;
}

void Brain::show(void) const
{
	for (int i = 0; i < mIdeasSize / 10; ++i) {
		for (int j = 0; j < 10; ++j)
			std::cout << std::setw(10) << mIdeas[i * 5 + j] << ' ';
		std::cout << '\n';
	}
}
