#include "node.h"
#include "graphTraversal.h"

using namespace std;

list<string> GraphTraversal::collectWords(string currentWord, Node* node)
{
    list<string> response;
    if(node->isCompleteWord())
    {
        response.push_back(currentWord);
    }
 
    for (int i = 0; i != 25; i++){
        if(node->getChildren()[i] != NULL){
            list<string> childResponse = collectWords(currentWord+static_cast<char>('a'+i), node->getChildren()[i]);
            response.insert(response.end(), childResponse.begin(), childResponse.end());
        }
    }
    
    return response;
}
