#include "Harl.hpp"

int main(int argc, char *argv[])
{

    if (argc > 1 && argv[1][0])
    {
        Harl harl;
        harl.complain(argv[1]);
    }
    else
    {
        std::cerr << RED << "USAGE ERROR : " << RESET
                  << argv[0] << " <LEVEL> eg. DEBUG" << std::endl;
        return (1);
    }
    return (0);
}