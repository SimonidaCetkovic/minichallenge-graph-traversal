class GraphTraversal {
  collectWords(currentWord, node){
    let response = [];
    
    if(node.isCompleteWord()){
      response.push(currentWord);
    }
    
    for(let i = 0; i<26; i++){
        if(node.getChildren()[i] != null){
          response.push(...this.collectWords(currentWord + String.fromCharCode('a'.charCodeAt(0) + i), node.getChildren()[i]));
      }
    }
    
    return response;
  }
}

module.exports = GraphTraversal;
