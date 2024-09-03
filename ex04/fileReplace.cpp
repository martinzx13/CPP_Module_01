#include "fileReplace.hpp"

FileReplace::FileReplace(const std::string &fileName, const std::string &word1, const std::string &word2) : fileName(fileName), word1(word1), word2(word2)
{
    std::cout << "File Replace was created Object" << std::endl;
}

void FileReplace::replaceWord(std::string &line, const std::string &word1, const std::string &word2)
{
    std::string result;
    int len;
    size_t prev;
    size_t position;

    len = word1.length();
    prev = 0;
    while ((position = line.find(word1, prev)) != std::string::npos)
    {
        result.append(line, prev, position - prev);
        result.append(word2);
        prev = position + len;
    }
    result.append(line, prev, std::string::npos);
    line = result;
}

void FileReplace::searchAndReplace()
{
    std::ifstream file(fileName);
    std::ofstream outputFile(fileName + ".replace");
    std::string line;

    if (!file || !outputFile)
    {
        std::cerr << "Error reading the file " << std::endl;
        return ;
    }
    while (std::getline(file, line))
    {
        replaceWord(line, word1, word2);
        outputFile << line << std::endl;
    }
    file.close();
    outputFile.close();
    std::cout << "File copied succesfully" << std::endl;
}

FileReplace::~FileReplace()
{
    std::cout << "Fire Replace Object was destroyed" << std::endl;
}