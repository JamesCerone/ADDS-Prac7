#ifndef NEWTRIENODE_H
#define NEWTRIENODE_H

#include <vector>
#include <string>

class NewTrieNode {
    public:
        std::vector<NewTrieNode*> child;
        int routerNumber;
        NewTrieNode();
};

#endif