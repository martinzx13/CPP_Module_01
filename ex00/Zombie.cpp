#include "Zombie.hpp"

void Zombie::announce ( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << name << ": Hi, Zombie was Created" << std::endl;
    this->name = name;
    announce();
}

Zombie::~Zombie(){
    std::cout << name << ": Bye, Zombie was destroyed" << std::endl;
}