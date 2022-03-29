class Node:
    def __init__(self, completeWordFlag):
        self.__completeWordFlag = completeWordFlag
        self.__children = [None] * 26
    
    def getChildren(self):
        return self.__children
    
    def setChild(self, character: chr, completeWordFlag: bool):
        child = Node(completeWordFlag)
        self.__children[ord(character)-97] = child
        return child

    def isCompleteWord(self):
        return self.__completeWordFlag
