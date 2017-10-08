#pragma once

#include <vector>
#include <unordered_set>
#include <memory>

struct Node{
    char currentChar;
    bool endOff word;
    std::unordered_set<Node> noeds;
};

namespace std
{
    template <>
    struct hash<Node>
    {
        size_t operator()(Node const & x) const noexcept
        {
            return x.currentChar; 
        }
    };
}

class Trie{
private:
    

public:
    void add_word(const std::string& toAdd);

}

