import java.util.List;
import java.util.ArrayList;

class GraphTraversal{
  public static List<String> collectWords(String currentWord, Node node){
    List<String> response = new ArrayList<>();

    if(node.isCompleteWord()){
      response.add(currentWord);
    }

    for(int i=0; i<26; i++){
      if(node.getChildren()[i] != null){
        response.addAll(collectWords(currentWord + (char)('a' + i), node.getChildren()[i]));
      }
    }

    return response;
  }
}
