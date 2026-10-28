#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== 1. CONSTRUCTION & DESTRUCTION CHAINING ===" << std::endl;
    {
        ScavTrap scav1("Sergeant");
    } // scav1 goes out of scope here to test destructor order!

    std::cout << "\n=== 2. ATTACK & SPECIAL CAPACITY ===" << std::endl;
    ScavTrap scav2("Guardian");

    scav2.attack("Intruder"); // Should use ScavTrap's attack message!
    scav2.guardGate();        // ScavTrap's unique ability

    std::cout << "\n=== 3. INHERITED DAMAGE & REPAIR LOGIC ===" << std::endl;
    scav2.takeDamage(30);
    scav2.beRepaired(20);

    std::cout << "\n=== 4. ORTHODOX CANONICAL FORM ===" << std::endl;
    ScavTrap original("OriginalScav");
    ScavTrap copy(original); // Copy constructor

    ScavTrap assigned("TempScav");
    assigned = original; // Copy assignment operator

    std::cout << "\n=== 5. END OF MAIN (DESTRUCTORS) ===" << std::endl;
    return 0;
}