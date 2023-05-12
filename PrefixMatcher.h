#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include "Trie.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class PrefixMatcher{
    public:
    map<string, int> routeIpMap;
    int selectRouter(string networkAddress);
    void insert(string address, int routerNumber);
    PrefixMatcher(){
        this->trie = new Trie();
    }
    Trie* trie;
};

#endif