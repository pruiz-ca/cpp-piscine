/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:02:44 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/02 19:46:18 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

# define YEL "\001\e[0;33m\002"
# define CYN "\001\e[0;36m\002"
# define NOCOL "\001\e[0m\002"

void	print_formatedfield(std::string str);

#endif
