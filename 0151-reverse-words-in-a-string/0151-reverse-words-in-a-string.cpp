class Solution {
public:
    string reverseWords(string s) {
        int n= s.size();
        string  ans = "";
     
               reverse(s.begin(), s.end());
      for(int i=0; i<n; i++){
        string output = "";
            while(s[i] != ' ' & i<n ){
                output += s[i];
                i++;
            }
    
     reverse(output.begin(), output.end());
     if(output.length() >0){
     ans += " "+ output;
        }
    }
 return ans.substr(1);

//    int n = s.size();
//         string ans = "";

//         reverse(s.begin(), s.end());  //1st step

//    for(int i=0; i<n; i++){
//     string word = "";
//     while(s[i] != ' ' && i<n){
//          word += s[i];
//          i++;
//     }
//     reverse(word.begin(), word.end());
  
//   if(word.length() > 0){
//   ans += " "+ word;
//   }
//    }
//  return ans.substr(1);
        }
    
};