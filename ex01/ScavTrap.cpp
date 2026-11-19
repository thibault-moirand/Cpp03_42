/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:19:25 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 16:19:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_guard = false;
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Attack = 20;
    std::cout << "ScavTrap " << this->_Name << " is created." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &src ): ClapTrap( src )
{
	std::cout << "SCAVTRAP: " << src._Name << " has been copied and placed!" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_Name << " is destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_Hit < 1)
	{
		std::cout << "ScavTrap " << _Name << " failed to attack itself, it's broken." << std::endl;
		return;
	}
	if (this->_Energy < 1)
	{
		std::cout << "ScavTrap " << _Name << " failed to attack itself, it's out of energy." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
	this->_Energy--;
}

void ScavTrap::guardGate()
{
	this->_guard = !this->_guard;
	if (this->_guard)
		std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->_Name << " is not in Gate keeper mode anymore." << std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &src)
{
	this->_Name = src._Name;
	this->_Hit = src._Hit;
	this->_Energy = src._Energy;
	this->_Attack = src._Attack;
	this->_guard = src._guard;
	return *this;
}