#include "Autocomplete.h"

void Autocomplete::insert(string word){
    Trie* trie = new Trie();
    trie->insert(word);
    this->trie = trie;
}

vector<string> Autocomplete:: getSuggestions(string partialWord){
    vector<string> result;
    Node* node= this->trie->search(partialWord);
    if(node==NULL) {
        return result;
    }
    this->trie->getAllWords(node,partialWord);
    result = this->trie->words;
    return result;
}