#ifndef NODE_H
#define NODE_H

class Node {
  private:
    bool completeWordFlag;
    Node* children[26];
  public:
    Node(bool completeWordFlag);
    Node();
    Node* setChild(char character, bool completeWordFlag);
    Node** getChildren();
    bool isCompleteWord();
};

#endif