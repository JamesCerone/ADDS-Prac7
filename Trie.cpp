#include "Trie.h"

using namespace std;

Trie::Trie(){
    root = new TrieNode();
}

void Trie::insertWord(string word){
    TrieNode* currNode = root;

    for (int i = 0; i < word.length(); i++){
        int j = word[i] - 'a';
        // for (int j = 0; j < currNode->child.size(); j++){   
            if(currNode->child.at(j) == nullptr){
                currNode->child.at(j) = new TrieNode();
            // }
            // currNode->isEndofWord = true;
        }
        currNode = currNode->child.at(j);
    }
    currNode->isEndofWord = true;
}

void Trie::search(string word) {
    TrieNode* currNode = root;

    for (int i = 0; i < word.length(); i++){
        int j = word[i] - 'a';
        // for (int j = 0; j < currNode->child.size(); j++){
            if (currNode->child[j] == nullptr){
                return;
            }
            currNode = currNode->child[j];
        // }
    }
}