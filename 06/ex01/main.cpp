/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 12:32:04 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_data
{
	int				data1;
	std::string		data2;
	int				data3;
}				Data;

uintptr_t	serialize( Data* ptr )
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data*	deserialize( uintptr_t raw )
{
	Data*	ret;

	ret = reinterpret_cast<Data*>(raw);
	return ret;
}

int		main( void )
{
	Data*		test = new Data;
	uintptr_t	serialized;
	Data*		deserialized;

	test->data1 = 4;
	test->data2 = "Hola";
	test->data3 = 2;

	serialized = serialize(test);
	deserialized = deserialize(serialized);

	std::cout << "===== Content =====" << std::endl;
	std::cout << deserialized->data1 << std::endl;
	std::cout << deserialized->data2 << std::endl;
	std::cout << deserialized->data3 << std::endl;

	std::cout << std::endl;

	std::cout << "===== Addresses =====" << std::endl;
	std::cout << "address test:\t\t" << test << std::endl;
	std::cout << "content serialized:\t" << serialized << std::endl;
	std::cout << "address deserialized:\t" << deserialized << std::endl;

	delete test;

	return 0;
}
