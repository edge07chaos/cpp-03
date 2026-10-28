#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout
			<< "ScavTrap "
			<< this->name
			<< " Default constructor called"
			<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout
			<< "ScavTrap "
			<< this->name
			<< " Destructor called"
			<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout
			<< "ScavTrap "
			<< this->name
			<< " Copy constructor called"
			<< std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout
			<< "ScavTrap "
			<< this->name
			<< " parameterized constructor called"
			<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	if (this != &obj)
		ClapTrap::operator=(obj);
	std::cout
			<< "ScavTrap "
			<< this->name
			<< " Copy assignment operator called"
			<< std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout
			<< "ScavTrap "
			<< this->name
			<< " is in Gate keeper mode.."
			<< std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0)
	{
		std::cout
				<< "ScavTrap "
				<< this->name
				<< " can’t attack, no hit points left"
				<< std::endl;
		return;
	}
	if (this->energyPoints <= 0)
	{
		std::cout
				<< "ScavTrap "
				<< this->name
				<< " can’t attack, no energy points left"
				<< std::endl;
		return;
	}
	this->energyPoints--;
	std::cout
			<< "ScavTrap "
			<< this->name
			<< " attacks "
			<< target
			<< ", causing "
			<< this->attackDamage
			<< " points of damage, ..damm!"
			<< std::endl;
}