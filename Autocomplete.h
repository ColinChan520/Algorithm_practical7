#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <iostream>
#include <vector>
#include "Node.h"
#include "Trie.h"

using namespace std;

class Autocomplete
{
    public:
    vector<string> getSuggestions(string partialWord);  
    void insert(string word);
    Trie* trie;
};

#endif