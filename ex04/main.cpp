#include "fileReplace.hpp"

int main (int argc, char *argv[])
{
    if (argc != 4 || (!argv[2][0] || !argv[3][0]))
    {
        std::cerr << "Error" <<  std::endl
            << "Correct Usage -> " << argv[0] << " <filename> <word1> <word2>" << std::endl;
        return (1);
    }
    std::string fileName = argv[1];
    std::string word1 = argv[2];
    std::string word2 = argv[3];

    FileReplace replacer(fileName, word1, word2);
    replacer.searchAndReplace();

}