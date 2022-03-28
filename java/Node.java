class Node{
    private Node[] children = new Node[26];
    private boolean completeWordFlag = false;

    public Node[] getChildren(){
        return this.children;
    }

    public Node setChild(char character, boolean completeWordFlag){
        Node child = new Node(completeWordFlag);
        this.children[character-97] = child;

        return child;
    }

    public boolean isCompleteWord(){
        return this.completeWordFlag;
    }

    public Node(boolean completeWordFlag){
        this.completeWordFlag = completeWordFlag;
    }
}
