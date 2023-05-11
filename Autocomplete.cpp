#include "Autocomplete.h"

void Autocomplete::insert(string word){
    Trie* trie = new Trie();
    trie->insert(word);
    this->trie = trie;
}

vector<string> Autocomplete:: getSuggestions(string partialWord){
    Node* node= this->trie->search(partialWord);
    if(node==NULL) {
        return;
    }
    this->trie->getAllWords(node,partialWord);
    return this->trie->words;
}