#ifndef AUTOCOMPLETION_H
#define AUTOCOMPLETION_H
#include <iostream>
#include <vector>
#include "Node.h"
#include "Trie.h"

using namespace std;

class Autocompletion
{
    public:
    vector<string> getSuggestions(string partialWord);  
    void insert(string word);
    Trie* trie;
};

#endif