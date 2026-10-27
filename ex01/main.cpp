#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== 1. CONSTRUCTORS & BASIC ACTIONS ===" << std::endl;
    ClapTrap clap1("Clippy");
    ClapTrap clap2("Trappy");

    clap1.attack("Trappy");
    clap2.takeDamage(0); // 0 damage test
    clap2.takeDamage(5);
    clap2.beRepaired(3);

    std::cout << "\n=== 2. DEAD CLAPTRAP TEST (NO HP) ===" << std::endl;
    clap2.takeDamage(20); // Overkill damage (HP goes to 0)
    clap2.attack("Clippy"); // Should fail (no HP)
    clap2.beRepaired(5);    // Should fail (no HP)
    clap2.takeDamage(5);    // Should fail (already dead)

    std::cout << "\n=== 3. ENERGY DEPLETION TEST ===" << std::endl;
    ClapTrap tired("TiredTrap");
    // ClapTrap starts with 10 energy points. 
    // Perform 10 actions to drain all energy.
    for (int i = 0; i < 10; ++i) {
        tired.beRepaired(1);
    }
    // 11th action should fail due to no energy points left
    tired.attack("Target");
    tired.beRepaired(1);

    std::cout << "\n=== 4. ORTHODOX CANONICAL FORM TEST ===" << std::endl;
    ClapTrap original("Original");
    ClapTrap copy(original); // Copy Constructor
    ClapTrap assigned("Assigned");
    assigned = original;     // Copy Assignment Operator

    std::cout << "\n=== 5. DESTRUCTORS ===" << std::endl;
    return 0;
}