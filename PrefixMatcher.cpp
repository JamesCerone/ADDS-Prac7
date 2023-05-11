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
        if (currNode->child[j] == nullptr){
            break;
        }
        currNode = currNode->child[j];
    }
    while (currNode->routerNumber == -1){
        if (currNode->child[0] != nullptr){
            currNode = currNode->child[0];
        }
        else {
            currNode = currNode->child[1];
        }
    }
    return currNode->routerNumber;
}

// int PrefixMatcher::firstNumberFound(NewTrieNode* ){

// }

