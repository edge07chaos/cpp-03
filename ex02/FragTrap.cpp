#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout
			<< "FragTrap "
			<< this->name
			<< " Default constructor called"
			<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout
			<< "FragTrap "
			<< this->name
			<< " Destructor called"
			<< std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout
			<< "FragTrap "
			<< this->name
			<< " Copy constructor called"
			<< std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout
			<< "FragTrap "
			<< this->name
			<< " parameterized constructor called"
			<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
		ClapTrap::operator=(obj);
	std::cout
			<< "FragTrap "
			<< this->name
			<< " Copy assignment operator called"
			<< std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout
			<< "FragTrap "
			<< this->name
			<< " said: hey bro!, give me high five (this is a positive high-fives request)"
			<< std::endl;
}