#include "HumanB.hpp"

const void HumanB::attack() const {
    std::cout << this->name << "attacks with their" << this->weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string name, Weapon weapon): name(name), weapon(weapon)
{
    std::cout << "Human B was created " << std::endl;
}

HumanB::~HumanB(){
    std::cout << "Human B was destroyed: I wll be back" << std::endl;
}