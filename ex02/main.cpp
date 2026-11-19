/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:54:55 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 14:54:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap Winners("Heap");
	FragTrap Loosers("stack");
	Winners.highFivesGuys();
	std::cout << "No higt five for the stack." << std::endl;
	return 0;
}