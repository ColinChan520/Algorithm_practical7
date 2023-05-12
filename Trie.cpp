#include "Trie.h"

Node* Trie::findChild(Node* parent, char ch){
    vector<Node*> children = parent->childs;
    for(int i = 0; i <children.size(); i++ ){
        if(children[i] -> data==ch){
            return children[i];
        }
    }
    return NULL;
}

void Trie::insert(string word){
    Node* currentNode=this->root;
    for(int i = 0; i < word.size(); i++){
        Node* childNode = findChild(currentNode, word[i]);
        if(childNode == NULL){
            Node* newNode = new Node();
            newNode->data=word[i];
            newNode->level=currentNode->level +1;
            currentNode->childs.push_back(newNode);
            currentNode = newNode;
        }
        else{
            currentNode = childNode;
        }
    }
    Node* endNode = new Node();
    currentNode->childs.push_back(endNode);
}

vector<string> Trie::getAllWords(Node* node,string word){
    Node* currentNode = node;
    vector<Node*> childs = currentNode->childs;
    for(int i = 0; i < childs.size(); i++){
        if(childs[i]->data == '#'){
            // cout<<word<<endl;
            this->words.push_back(word);
        }
        else{
            string word_ = word;
            word_.append({childs[i]->data});
            getAllWords(childs[i], word_);
        }
    }
    return this->words;
    // for(int i=0; i<this->words.size(); i++) {
    //     cout<<this->words[i]<<endl;
    // }
}

Node* Trie::search(string word) {
    Node* currentNode=this->root;
    for(int i=0; i<word.size(); i++) {
        Node* childNode= Trie::findChild(currentNode,word[i]);
        if(childNode!=NULL) {
            currentNode=childNode;
        } else {
            return NULL;
        }
    }
    return currentNode;
}
