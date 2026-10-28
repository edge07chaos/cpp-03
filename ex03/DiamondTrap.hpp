#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string name;
	 public:
	 	DiamondTrap();
	 	~DiamondTrap();
	 	DiamondTrap(const DiamondTrap& obj);
	 	DiamondTrap(const std::string& name);
	 	DiamondTrap& operator=(const DiamondTrap& obj);

		void whoAmI();
		using ScavTrap::attack;

		unsigned int getHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttackDamage(void) const;
};

#endif
