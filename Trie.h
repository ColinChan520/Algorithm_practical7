#ifndef TRIE_H
#define TRIE_H
#include <iostream>
#include <vector>
#include "Node.h"


using namespace std;

class Trie
{
    public:
    Node* root;
    vector<string> words;
    Trie(){
        this->root=new Node();
    }
    void insert(string word);
    Node* findChild(Node* parent,char ch);
    void getAllWords(Node* node,string word);
    Node* search(string word);
};

#endif