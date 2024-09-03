#include <iostream>

int main()
{
    std::string value;
    std::string *stringPTR;

    value = "HI THIS IS BRAIN";

    std::string &stringREF = value;
    stringPTR = &value;

    std::cout << "The memory address of the string variable : " << &value << std::endl;
    std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF      : " << &stringPTR << std::endl;

    // Value of the variables.
    std::cout << "The value of the string variable    : " << value << std::endl;
    std::cout << "The value pointed to by stringPTR   : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF   : " << stringREF << std::endl;
}