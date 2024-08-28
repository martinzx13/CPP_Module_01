#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    if (N< 0 )
        return NULL;

    Zombie* zomHorde = new Zombie[N];

    for(int i = 0; i < N; i++)
        zomHorde[i].setName(name);
    return (zomHorde);
}