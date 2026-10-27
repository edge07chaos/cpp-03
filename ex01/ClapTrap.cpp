#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Default"),
											 hitPoints(100),
											 energyPoints(50),
											 attackDamage(20)
{
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " Default constructor called"
			<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " Destructor called"
			<< std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name),
																							hitPoints(100),
																							energyPoints(50),
																							attackDamage(20)
{
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " Custom constructor called"
			<< std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &obj) : name(obj.name),
																					hitPoints(obj.hitPoints),
																					energyPoints(obj.energyPoints),
																					attackDamage(obj.attackDamage)
{
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " Copy constructor called"
			<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " Copy assignment operator called"
			<< std::endl;
	return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout
				<< "ClapTrap "
				<< this->name
				<< " can’t take damage, is already dead"
				<< std::endl;
		return;
	}
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " took "
			<< amount
			<< " points of damage!"
			<< std::endl;
	if (amount >= this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout
				<< "ClapTrap "
				<< this->name
				<< " can’t be repaired, no energy point left"
				<< std::endl;
		return;
	}
	if (this->hitPoints <= 0)
	{
		std::cout
				<< "ClapTrap "
				<< this->name
				<< " can’t be repaired, no hit points left"
				<< std::endl;
		return;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " regains "
			<< amount
			<< " hit points"
			<< std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0)
	{
		std::cout
				<< "ClapTrap "
				<< this->name
				<< " can’t attack, no hit points left"
				<< std::endl;
		return;
	}
	if (this->energyPoints <= 0)
	{
		std::cout
				<< "ClapTrap "
				<< this->name
				<< " can’t attack, no energy points left"
				<< std::endl;
		return;
	}
	this->energyPoints--;
	std::cout
			<< "ClapTrap "
			<< this->name
			<< " attacks "
			<< target
			<< ", causing "
			<< this->attackDamage
			<< " points of damage!"
			<< std::endl;
}