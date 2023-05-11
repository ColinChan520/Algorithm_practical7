#ifndef NODE_H
#define NODE_H
#include <vector>
#include <iostream>

using namespace std;

class Node
{
    public:
    char data;
    vector<Node*> childs;
    Node(){
        this->data='#';
    }
    

};

#endif