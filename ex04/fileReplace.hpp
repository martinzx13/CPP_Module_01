#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class FileReplace
{
private:
    std::string fileName;
    std::string word1;
    std::string word2;

public:
    FileReplace(const std::string &fileName, const std::string &word1, const std::string &word2);
    void searchAndReplace( void );
    ~FileReplace();
private:
    void replaceWord(std::string &line, const std::string &word1, const std::string &word2);
};
#endif