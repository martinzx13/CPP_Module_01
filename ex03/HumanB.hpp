#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    void const attack() const;
    HumanB(const std::string name);
    void setWeapon( Weapon weapon);
    ~HumanB();
};
#endif