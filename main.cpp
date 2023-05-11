#include <iostream>
#include <vector>
#include "Trie.h"
#include "Autocomplete.h"

using namespace std;


int main(){
    Trie trie;
    Autocomplete obj;

    obj.insert("bin");
    obj.insert("ball");
    obj.insert("ballet");
    
    vector<string> suggestions;

    suggestions = obj.getSuggestions("b");
    for (string s : suggestions){
        cout << s << " ";
    }
    cout << endl;

    suggestions = obj.getSuggestions("ba");
    for (string s : suggestions){
        cout << s << " ";
    }
    cout << endl;

    suggestions = obj.getSuggestions("bal");
    for (string s : suggestions){
        cout << s << " ";
    }
    cout << endl;

    suggestions = obj.getSuggestions("balle");
    for (string s : suggestions){
        cout << s << " ";
    }
    cout << endl;

    return 0;   
}