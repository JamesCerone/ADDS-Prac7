#include <iostream>
#include <vector>
#include "Trie.h"

using namespace std;


int main(){
    Trie trie;

    trie.insert("hello");
    cout << trie.search("hello") << endl;
}