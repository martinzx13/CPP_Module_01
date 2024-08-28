#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name)
{
    this->name = name;
}
Zombie::Zombie()
{
    std::cout << "Object Zombie : "<< name << " creation." << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Object Zombie : "<< name << " destruction." << std::endl;
}