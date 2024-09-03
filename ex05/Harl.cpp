#include "Harl.hpp"

Harl::Harl()
{
    std::cout << YELLOW << "Be Ready the Harl dude arrive" << RESET << std::endl;
}
Harl::~Harl()
{
    std::cout << GREEN << "Yea, the Harl dude has gone " << RESET << std::endl;
}
void Harl::debug(void)
{
    std::cout << BLUE << "DEBUG :" << RESET
              << "I love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
              << std::endl;
}

void Harl::info(void)
{
    std::cout << MAGENTA << "INFO: " << RESET
              << "I cannot believe adding extra bacon costs more money."
              << "You didn’t put enough bacon in my burger! If you did, "
              << "I wouldn’t be asking for more! "
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "WARNING: " << RESET
              << "I think I deserve to have some extra bacon for free."
              << "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "ERROR: " << RESET
              << "This is unacceptable!"
              << "I want to speak to the manager now."
              << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*levelComplain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*levelComplain[i])();
            return;
        }
    }
}