#include "words.cpp"

void Words::build(Trie& trie, Positon pos){
    if(validate(pos)){
        for(const auto & p : getPositons(pos)){
            build(trie,p);
        }
    }
}
