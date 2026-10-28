#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap& obj);
	ClapTrap(const std::string& name);
	ClapTrap &operator=(const ClapTrap& obj);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void attack(const std::string& target);
};

#endif