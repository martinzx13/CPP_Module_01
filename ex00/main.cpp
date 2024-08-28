#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie* zombie = newZombie("Pavlosky");

    randomChump("Sargentosky");
    delete(zombie);
}