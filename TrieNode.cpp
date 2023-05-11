#include "TrieNode.h"

using namespace std;

TrieNode::TrieNode(){
    child = vector<TrieNode*>(26,nullptr);
    isEndofWord = false;
}

// TrieNode::TrieNode(string){
//     child = vector<TrieNode*>(26,nullptr);
//     isEndofWord = false;
// }