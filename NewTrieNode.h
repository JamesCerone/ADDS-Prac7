#ifndef NEWTRIENODE_H
#define NEWTRIENODE_H

#include <vector>
#include <string>

class NewTrieNode {
    public:
        NewTrieNode* child[2];
        int routerNumber;
        NewTrieNode();
};

#endif