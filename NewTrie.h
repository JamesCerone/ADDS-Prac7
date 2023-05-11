#ifndef NEWTRIE_H
#define NEWTRIE_H

#include <vector>
#include <string>
#include "NewTrieNode.h"


class NewTrie {
    private:
        NewTrieNode* root;

    public:
        NewTrie();
        void insertRouter(std::string address, int routerNumber);
        void search(std::string word);

        friend class PrefixMatcher;
};


#endif