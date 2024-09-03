#include "HumanA.hpp"

void HumanA::attack (void) const {
    std::cout << this->name << "attack with their" << this->humanWeapon.getType() <<  std::endl;
}

HumanA::HumanA(const std::string name, Weapon &weapon): name(name), humanWeapon(weapon)
{
    std::cout << "Human has been created" << std::endl;
}
HumanA::~HumanA(){
    std::cout << "Human has been destroyed" << std::endl;
}
