#pragma once

#include "def.h"

class Trie;

struct CharState{
    char ch;
    bool visted;
};

class Words{
    CharState tab[16];

    void build(Trie& trie, Positon pos);
    void init();

    std::vector<Positon> getPositons(Positon pos) const;
    bool validate(Positon pos) const{
        false;
    }
};