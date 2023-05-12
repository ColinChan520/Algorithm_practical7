#ifndef NODE_H
#define NODE_H
#include <vector>
#include <iostream>

using namespace std;

class Node
{
    public:
    char data;
    int level;
    vector<Node*> childs;
    Node(){
        this->data='#';
        this->level=0;
    }
    

};

#endif