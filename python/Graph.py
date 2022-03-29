from Node import Node

class Graph:
    def dfs(self, currentWord: str, node: Node):
        response = []
        
        if(node.isCompleteWord()):
            response.append(currentWord)
        
        for i in range(0,26):
            if(node.getChildren()[i] != None):
                response.extend(self.dfs(currentWord + chr(ord('a') + i), node.getChildren()[i]))
        
        return response