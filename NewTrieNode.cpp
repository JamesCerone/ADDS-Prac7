#include "NewTrieNode.h"

using namespace std;

NewTrieNode::NewTrieNode() : routerNumber(-1){
    for (int i =0; i < 2; i++){
        child[i] = nullptr;
    }
}