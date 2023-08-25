/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:12:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/25 11:51:20 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << '\n' << "/* Array Test */" << '\n';

	const int arr_size = 100;
	Animal* arr[arr_size];
	for (int idx = 0; idx < arr_size; idx += 2) {
		arr[idx] = new Dog();
		arr[idx + 1] = new Cat();
	}
	std::cout << "-----------------------------------------------" << '\n';
	for (int idx = 0; idx < arr_size; ++idx)
		delete arr[idx];

	std::cout << "# Deep Copy ###################################" << '\n';
	Cat	cat1;
	Cat	cat2(cat1);
	std::cout << "-------------------------------------------" << '\n';
	cat1.getBrain()->fill("Hi man~");
	cat1.getBrain()->show();
	cat2.getBrain()->show();
	std::cout << "-------------------------------------------" << '\n';
	cat2.getBrain()->fill("Good man~");
	cat1.getBrain()->show();
	cat2.getBrain()->show();
	std::cout << "-------------------------------------------" << '\n';
	return 0;
}
