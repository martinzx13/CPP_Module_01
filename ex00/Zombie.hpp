#include <iostream>


class Zombie{

    private:
        std::string name;
    public:
        void announce ( void );
        Zombie(std::string);
        ~Zombie();
};