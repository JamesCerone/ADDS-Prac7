#ifndef NEWTRIE_H
#define NEWTRIE_H

#include <vector>
#include <string>
#include "TrieNode.h"

class NewTrie {
    private:
        TrieNode* root;

    public:
        NewTrie();
        void insertRouter(std::string address, int routerNumber);
        void search(std::string word);
};


#endif