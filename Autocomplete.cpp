#include "Autocomplete.h"
#include "Trie.h"

using namespace std;

/*Autocomplete::Autocomplete(){
    root = new TrieNode;
}*/

vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> res;

    TrieNode* currNode = trie.root; // From Trie Class

    for (int i = 0; i < partialWord.length(); i++){
        int j = partialWord[i] - 'a';
        //for (int j = 0; j < currNode->child.size(); j++){   
            if(currNode->child.at(j) == nullptr){
                return res;
            }
            currNode = currNode->child.at(j);
        //}
    }

    findWords(currNode, partialWord, res);
    return res;
}

void Autocomplete::insert(string word){
    trie.insertWord(word); // From the Trie Class
}

void Autocomplete::findWords(TrieNode* node, string prefix, vector<string>& res){
    /*if (node == nullptr){
        return;
    }*/
    if (node->isEndofWord){
        res.push_back(prefix);
    }
    
    for (int i = 0; i < node->child.size(); i++){
        if (node->child.at(i) != nullptr){
            char c = 'a' + i;
            findWords(node->child.at(i), prefix + c, res);
        }
    }
}