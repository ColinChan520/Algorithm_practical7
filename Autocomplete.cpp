#include "Autocomplete.h"

void Autocomplete::insert(string word){
    trie->insert(word);
}

vector<string> Autocomplete:: getSuggestions(string partialWord){
    vector<string> result;
    Node* node= this->trie->search(partialWord);
    if(node==NULL) {
        return result;
    }
    result = this->trie->getAllWords(node,partialWord);
    return result;
}