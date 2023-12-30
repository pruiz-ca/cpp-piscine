/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:51 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 18:40:17 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main( void )
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << std::endl << "===== Cat & Dog =====" << std::endl;
	std::cout << "Cat type: " << cat->getType() << " " << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;

	std::cout << "Cat sound: ";
	cat->makeSound();
	std::cout << "Dog sound: ";
	dog->makeSound();
	std::cout << "Animal sound: ";
	meta->makeSound();

	std::cout << std::endl << "===== Wrongcat =====" << std::endl;
	wrongcat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrongcat;

	return 0;
}
