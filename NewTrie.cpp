#include "NewTrie.h"

using namespace std;

NewTrie::NewTrie(){
    root = new TrieNode();
}

void NewTrie::insertRouter(std::string address, int routerNumber){
    TrieNode* currNode = root;

    for (int i = 0; i < address.length(); i++){
        // int j = address[i] - '';

        // if (currNode->child)

    }
}

void NewTrie::search(string word) {
    TrieNode* currNode = root;

    for (int i = 0; i < word.length(); i++){
        int j = word[i] - 'a';
        if (currNode->child[j] == nullptr){
            return;
        }
        currNode = currNode->child[j];
    }
}