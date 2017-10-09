#pragma once

#include "def.h"
#include <vector>


class Trie;

struct CharState{
    char ch;
    bool visted;
};

class Words{
    CharState tab[16];

    Words();

    void build(Trie& trie, Positon pos);

};