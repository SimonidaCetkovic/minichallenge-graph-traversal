#include "node.h"

Node::Node(bool completeWordFlag){
    this->completeWordFlag = completeWordFlag;
}

Node* Node::setChild(char character, bool completeWordFlag){
    Node* child = new Node(completeWordFlag);
    this->children[character-97] = child;
    
    return child;
}

Node** Node::getChildren(){
    return this->children;
}


bool Node::isCompleteWord(){
    return completeWordFlag;
}