#include "PrefixMatcher.h"

int PrefixMatcher::selectRouter(string networkAddress){
    vector<string> result;
    Node* deepestNode;
    string longestMatchPrefix;
    for(int i=0; i< networkAddress.size();i++){
        string partialAdd = networkAddress.substr(0, i+1);
        Node* node= this->trie->search(partialAdd);
        if(node==NULL) {
            break;
        }
        else{
            deepestNode = node;
            longestMatchPrefix = partialAdd;
        }
    }
    
    result = this->trie->getAllWords(deepestNode,longestMatchPrefix);
    return routeIpMap[result[0]];
}

void PrefixMatcher::insert(string address, int routerNumber){
    routeIpMap.insert({address, routerNumber});
    trie->insert(address);
}