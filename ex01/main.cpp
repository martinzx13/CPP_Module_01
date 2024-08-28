#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main()
{
    int sizeZombies;

    sizeZombies = 5;
    Zombie *zomHorde = zombieHorde(sizeZombies, "Pablosky");

    if (zomHorde)
    {
        for (int i = 0; i < sizeZombies; i++)
            zomHorde[i].announce();
        delete [] zomHorde;
    }
}