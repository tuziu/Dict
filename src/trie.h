#pragma once

#include <memory>

struct Node{
    char currentChar;
    bool endOff word;
    std::unique_ptr<Node[]> nodes;
};


class Trie{
private:
    

public:
    void add_word(const std::string& toAdd);

}

