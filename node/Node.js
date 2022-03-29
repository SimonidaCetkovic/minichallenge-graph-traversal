class Node {
  #completeWordFlag;
  #children;
  
  constructor(completeWordFlag) {
    this.#completeWordFlag = completeWordFlag;
    this.#children = new Array(26);
  }
  
  getChildren(){
    return this.#children;
  }
  
  setChild(character, completeWordFlag){
    const child = new Node(completeWordFlag);
    this.#children[character.charCodeAt(0)-97] = child;

    return child;
  }
  
  isCompleteWord(){
    return this.#completeWordFlag;
  }
  
  setCompleteWord(completeWordFlag){
    this.#completeWordFlag = completeWordFlag;
  }
}

module.exports = Node;
