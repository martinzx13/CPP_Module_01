#include "Weapon.hpp"

const std::string &Weapon::getType() const{
    return (this->type);
}

void Weapon::setType(const std::string newType)
{
    this->type = newType;
}

Weapon::Weapon(const std::string weapon)
{
    this->type = weapon;
}