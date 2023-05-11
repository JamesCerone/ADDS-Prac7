#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <iostream>
#include <vector>
#include <string>
#include "NewTrie.h"

class PrefixMatcher {
    private:
        NewTrie trie;
        
    public:
        void insert(std::string address, int routerNumber);
        int selectRouter(std::string networkAddress);
};

#endif