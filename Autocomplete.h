#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <iostream>
#include <string>
#include "Trie.h"


class Autocomplete {
    private:
        Trie trie;

    public:
        std::vector<std::string> getSuggestions(std::string partialWord);
        void insert(std::string word);
        void findWords(TrieNode* node, std::string prefix, std::vector<std::string>& res);

};

#endif

