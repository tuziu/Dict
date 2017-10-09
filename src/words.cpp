#include "words.h"

namespace {
    usize dim = 4;

    std::vector<Positon> getPositons(Positon pos)  {
        return {{pos.x-1,pos.y-1},{pos.x,pos.y-1},{pos.x+1,pos.y+1},
                {pos.x,pos.y-1},                {pos.x,pos.y+1},
                {pos.x-1,pos.y+1},{pos.x,pos.y+1},{pos.x+1,pos.y+1}};
    }

    bool validate(Positon pos) {
        return 0 <= pos.x && pos.x < dim && 0 <= pos.y && pos.y < dim; 
    }
}

void Words::build(Trie& trie, Positon pos){
    if(validate(pos)){
        for(const auto & p : getPositons(pos)){
            build(trie,p);
        }
    }
}

Words::Words(): tab{{0,false},{0,false},{0,false},{0,false},
                    {0,false},{0,false},{0,false},{0,false},
                    {0,false},{0,false},{0,false},{0,false},
                    {0,false},{0,false},{0,false},{0,false}}{

}
