#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->name = "default";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = FragTrap::attackDamage;

	std::cout
			<< "DiamondTrap "
			<< this->name
			<< " Default constructor called"
			<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout
			<< "DiamondTrap "
			<< this->name
			<< " Destructor called"
			<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj),
																									 ScavTrap(obj),
																									 FragTrap(obj)
{
	this->name = obj.name;
	std::cout
			<< "DiamondTrap "
			<< this->name
			<< " Copy constructor called"
			<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
																										ScavTrap(name),
																										FragTrap(name)
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = FragTrap::attackDamage;
	std::cout
			<< "DiamondTrap "
			<< this->name
			<< " parameterized constructor called"
			<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
		this->name = obj.name;
	}
	std::cout
			<< "DiamondTrap "
			<< this->name
			<< " Copy assignment operator called"
			<< std::endl;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello, I'm DiamondTrap and my name is " << this->name
						<< ", but my ClapTrap name is: " << ClapTrap::name << std::endl;
}

unsigned int DiamondTrap::getHitPoints(void) const {
	return this->hitPoints;
}
unsigned int DiamondTrap::getEnergyPoints(void) const {
	return this->energyPoints;
}
unsigned int DiamondTrap::getAttackDamage(void) const {
	return this->attackDamage;
}