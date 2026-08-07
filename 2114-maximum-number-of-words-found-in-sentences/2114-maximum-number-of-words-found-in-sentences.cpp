class Solution {
public:
     int num(string sent){
   int count = 0;
   string word = "";
        for(char c:sent){
            if(c == ' '){
                count++;
                word="";
            }
            word += c;
        }
        if(word != ""){
            count++;
        }
        return count;
     }

    int mostWordsFound(vector<string>& sentences) {
        int ans = INT_MIN;
       
       for(string sent : sentences){
       int count = num(sent);
            ans = max(ans, count);
        }
        return ans;
       }

        
};