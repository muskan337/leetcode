class Solution {
public:

 

  bool isValid(string sent){
    int hyphen = 0;
    int punctuation = 0;
    int n=sent.size();
    for(int i=0; i<n; i++){
    if(isdigit(sent[i])){
        return false;
    }
    if(sent[i] == '-'){
        hyphen++;
        if(i == 0 || i == n-1 || hyphen>1){
            return false;
        }
        if(!islower(sent[i-1] ) || !islower(sent[i+1])){
            return false;
        }
    }

    if(sent[i] == ',' || sent[i] == '!' || sent[i] == '.'){
        punctuation++;
    
    if( i != n-1 || punctuation > 1 ){
        return false;
    }
    }
    }
    return true;
  }

    int countValidWords(string sentence) {
        int count =0;
        sentence.push_back(' ');
        string word = "";
        for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' ' && word != ""){
            if(isValid(word)){
            count++;
        }
        word = "";
       } else{
            if(sentence[i] != ' '){
        word += sentence[i];
            }
        }
        }
        return count;
    }
};