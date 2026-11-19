/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:50:23 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 13:50:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FRAGTRAP: " << "An unnamed trap has been placed!" << std::endl;
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Attack = 30;
    std::cout << "FragTrap " << this->_Name << " is created." << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ): ClapTrap( src )
{
	std::cout << "FragTrap: " << src._Name << " has been copied and placed!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_Name << " is destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " asks for a high five!" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const &src)
{
	this->_Name = src._Name;
	this->_Hit = src._Hit;
	this->_Energy = src._Energy;
	this->_Attack = src._Attack;
	return *this;
}