import java.util.*;
public class SpinWords {

  public String spinWords(String sentence) {
    //TODO: Code stuff here
    String ergebnis = "";
    String[] splits = sentence.split(" ");
    if(splits[0].length() >= 5){
        ergebnis+=spinString(splits[0]);
      }else{
        ergebnis+=splits[0];
      }
    for(int i =1; i< splits.length; i++){
      if(splits[i].length() >= 5){
        ergebnis+=" "+spinString(splits[i]);
      }else{
        ergebnis+=" "+splits[i];
      }
    }

    return ergebnis;
  }
  public String spinString(String word){
    Stack<Character> stack= new Stack<Character>();
    for(int i =0; i<word.length();i++){
      stack.push((Character) word.charAt(i));
    }
    String reversed="";
    while(!stack.isEmpty()){
      reversed+=""+stack.pop();
    }
    return reversed;
  }
}
