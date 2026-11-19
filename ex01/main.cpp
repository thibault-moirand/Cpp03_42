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

#include "ScavTrap.hpp"

int	main() {
	ScavTrap Kokiri("Kokiri Sword");
	ScavTrap Master("Master Sword");

	std::cout << std::endl;

	Kokiri.attack("Master Sword");
	Master.attack("Kokiri Sword");
	Kokiri.guardGate();
	Kokiri.guardGate();

	std::cout << std::endl;

	return 0;
}