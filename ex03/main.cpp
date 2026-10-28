#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== 1. CONSTRUCTION & STATS VERIFICATION ===" << std::endl;
    DiamondTrap dt1("Monster");

    std::cout << "\n--- Checking Stats ---" << std::endl;
    std::cout << "Hit Points (should be 100 from FragTrap): " << dt1.getHitPoints() << std::endl;
    std::cout << "Energy Points (should be 50 from ScavTrap): " << dt1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage (should be 30 from FragTrap): " << dt1.getAttackDamage() << std::endl;

    std::cout << "\n=== 2. MEMBER FUNCTIONS & ABILITIES ===" << std::endl;
    dt1.whoAmI();          // Should show Monster & Monster_clap_name
    dt1.attack("Target");  // ScavTrap attack message
    dt1.highFivesGuys();   // FragTrap special ability
    dt1.guardGate();       // ScavTrap special ability

    std::cout << "\n=== 3. COPY CONSTRUCTOR EXPERIMENT ===" << std::endl;
    DiamondTrap copy(dt1);

    std::cout << "\n--- Testing Original vs Copy whoAmI() ---" << std::endl;
    std::cout << "Original whoAmI(): ";
    dt1.whoAmI();
    std::cout << "Copy whoAmI():     ";
    copy.whoAmI();

    std::cout << "\n=== 4. COPY ASSIGNMENT OPERATOR EXPERIMENT ===" << std::endl;
    DiamondTrap assigned("Temp"); // Create a temporary DiamondTrap
    
    std::cout << "\n--- Before Assignment ---" << std::endl;
    assigned.whoAmI();

    std::cout << "\n--- Assigning dt1 to assigned ---" << std::endl;
    assigned = dt1; // Calls DiamondTrap::operator=

    std::cout << "\n--- After Assignment ---" << std::endl;
    assigned.whoAmI();

    std::cout << "\n=== 5. DESTRUCTION ===" << std::endl;
    return 0;
}