#include "PrefixMatcher.h"

using namespace std;

void PrefixMatcher::insert(string address, int routerNumber){
    trie.insertRouter(address, routerNumber);
}

int PrefixMatcher::selectRouter(string networkAddress){
    NewTrieNode* currNode = trie.root;

    int lastRouter = -1;
    for (char c : networkAddress){
        int j = c - '0';
        if (currNode->routerNumber != -1) {
                lastRouter = currNode->routerNumber;
        }
        else if (currNode->child[j] == nullptr){
            break;
        }
        currNode = currNode->child[j];
    }
    return lastRouter;
}

