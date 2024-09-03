#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string name;
    Weapon &humanWeapon;

public:
    void attack() const;
    HumanA(const std::string name, Weapon &weapon);
    ~HumanA();
};
#endif