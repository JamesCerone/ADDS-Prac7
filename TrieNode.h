#ifndef TRIENODE_H
#define TRIENODE_H

#include <vector>
#include <string>

class TrieNode {
    public:
        std::vector<TrieNode*> child;
        bool isEndofWord;
        TrieNode();
};

#endif