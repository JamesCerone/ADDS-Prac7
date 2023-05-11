#include "NewTrie.h"

using namespace std;

NewTrie::NewTrie(){
    root = new NewTrieNode();
}

void NewTrie::insertRouter(std::string address, int routerNumber){
    NewTrieNode* currNode = root;

    for (int i = 0; i < address.length(); i++){
        int j = address[i] - '0';

        if (currNode->child[j] == nullptr){
            currNode->child[j] = new NewTrieNode();
        }
        currNode = currNode->child[j];

    }
    currNode->routerNumber = routerNumber;
}

// void NewTrie::search(string word) {
//     NewTrieNode* currNode = root;
//     for (int i = 0; i < word.length(); i++){
//         int j = word[i] - 'a';
//         if (currNode->child[j] == nullptr){
//             return;
//         }
//         currNode = currNode->child[j];
//     }
// }