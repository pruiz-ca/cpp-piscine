/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:51 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 18:41:10 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int		main( void )
{
	std::cout << "/* ===== Leak test ===== */" << std::endl;
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();
	delete dog;
	delete cat;

	std::cout << std::endl << "/* ===== Animal array test ===== */" << std::endl;
	Animal*			animals[10];
	int				i = 0;

	for (i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (i = 5; i < 10; i++)
		animals[i] = new Cat();

	while (i-- > 0)
		delete animals[i];

	std::cout << std::endl << "/* ===== Deep copy test ===== */" << std::endl;
	Cat*			kitty = new Cat();
	Cat*			anotherKitty = new Cat(*kitty);

	delete kitty;
	anotherKitty->makeSound();
	delete anotherKitty;

	Dog*			puppy = new Dog();
	Dog*			anotherPuppy = new Dog();

	*anotherPuppy = *puppy;
	delete puppy;
	anotherPuppy->makeSound();
	delete anotherPuppy;

	std::cout << std::endl << "/* ===== Ideas test ===== */" << std::endl;
	Dog*			cleverPuppy = new Dog();

	for (int i = 0; i < 100; i++)
		std::cout << cleverPuppy->getBrain()->getIdea(i) << " ";
	std::cout << std::endl;
	delete cleverPuppy;

	return 0;
}
