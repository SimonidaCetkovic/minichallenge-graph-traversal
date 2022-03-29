#ifndef GRAPH_TRAVERSAL_H
#define GRAPH_TRAVERSAL_H

#include <bits/stdc++.h>
#include "node.h"

using namespace std;

class GraphTraversal {
public:
    std::list<string> collectWords(string currentWord, Node* node);
};

#endif