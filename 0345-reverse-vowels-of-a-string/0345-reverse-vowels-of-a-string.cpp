class Solution {
public:
   
   bool isVowel(char ch){
    ch = tolower(ch);
     
     return ch == 'a'|| ch == 'e' ||  ch == 'i' ||  ch == 'o' ||  ch == 'u' ;

   }
   

    string reverseVowels(string s) {
        int n = s.size();
      int st= 0, end = n-1;
      while(st < end){
        if(isVowel(s[st]) && isVowel(s[end])){
            swap(s[st++], s[end--]);
        }
        else if(isVowel(s[st])){
            end--;
        }else{
            st++;
        }
      }
      return s;
    }
};