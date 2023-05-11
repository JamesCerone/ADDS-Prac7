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
        void insertWord(std::string word);
        void search(std::string word);

        friend class Autocomplete;
};


#endif