#ifndef TRIE_H
#define TRIE_H

#include <vector>
#include <string>
#include "TrieNode.h"

class Trie {
    private:
        TrieNode* root;

    public:
        Trie();
        void insert(std::string word);

        void search(std::string word);


};


#endif