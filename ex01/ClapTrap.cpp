/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:54:58 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 14:54:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "CLAPTRAP: default has been placed!" << std::endl;
	this->_Name = "default";
	this->_Hit = 10;
	this->_Energy = 10;
	this->_Attack = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "CLAPTRAP: " << Name << " has been placed!" << std::endl;
	this->_Name = Name;
	this->_Hit = 10;
	this->_Energy = 10;
	this->_Attack = 0;
}

ClapTrap::ClapTrap( ClapTrap const &src ) {
	std::cout << "CLAPTRAP: " << src._Name << " has been copied and placed!" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAPTRAP: " <<this->_Name << " successfully destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_Hit < 1)
	{
		std::cout << "ClapTrap " << _Name << " failed to attack itself, it's broken." << std::endl;
		return;
	}
	if (this->_Energy < 1)
	{
		std::cout << "ClapTrap " << _Name << " failed to attack itself, it's out of energy." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
	this->_Energy--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit < 1)
		std::cout << "ClapTrap " << this->_Name << " is broken already." << std::endl;
	else
	{
		if (this->_Hit < amount)
			this->_Hit = 0;
		else
			this->_Hit -= amount;
		if (this->_Hit < 1)
			std::cout << "ClapTrap " << this->_Name << " has taken " << amount << " damages. It broke!" << std::endl;
		else
			std::cout << "ClapTrap " << this->_Name << " has taken " << amount << " damages. It now has " << this->_Hit << " hp." << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit < 1)
	{
		std::cout << "ClapTrap " << _Name << " failed to repair itself, it's broken." << std::endl;
		return;
	}
	if (this->_Energy < 1)
	{
		std::cout << "ClapTrap " << _Name << " failed to repair itself, it's out of energy." << std::endl;
		return;
	}
	if ((this->_Hit + amount) > 10)
		this->_Hit = 10;
	else
		this->_Hit += amount;
	std::cout << "ClapTrap " << this->_Name << " repaired itself, gaining " << amount << " hit points. It now has " << this->_Hit<< " hp." << std::endl;
	this->_Energy--;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &src)
{
	this->_Name = src._Name;
	this->_Hit = src._Hit;
	this->_Energy = src._Energy;
	this->_Attack = src._Attack;
	return *this;
}