#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== 1. FRAGTRAP CONSTRUCTOR & DESTRUCTOR CHAINING ===" << std::endl;
    {
        FragTrap frag1("Fraggy");
    } // frag1 goes out of scope here to verify destructor sequence!

    std::cout << "\n=== 2. FRAGTRAP ACTIONS & SPECIAL CAPACITY ===" << std::endl;
    FragTrap frag2("HighFiver");

    frag2.attack("Target Dummy"); // Uses inherited ClapTrap attack with 30 Damage!
    frag2.takeDamage(40);
    frag2.beRepaired(25);
    frag2.highFivesGuys();        // FragTrap special ability!

    std::cout << "\n=== 3. COMPARISON: CLAPTRAP vs SCAVTRAP vs FRAGTRAP ===" << std::endl;
    ClapTrap clap("BasicClap");
    ScavTrap scav("GateKeeper");
    FragTrap frag("BigBoi");

    clap.attack("Enemy"); // Should cause 0 damage
    scav.attack("Enemy"); // Should cause 20 damage (ScavTrap message)
    frag.attack("Enemy"); // Should cause 30 damage (ClapTrap message)

    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "\n=== 4. ORTHODOX CANONICAL FORM ===" << std::endl;
    FragTrap original("OriginalFrag");
    FragTrap copy(original);

    FragTrap assigned("TempFrag");
    assigned = original;

    std::cout << "\n=== 5. END OF MAIN (STACK DESTRUCTION) ===" << std::endl;
    return 0;
}