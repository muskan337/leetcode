class Solution {
public:

    string shortestBeautifulSubstring(string s, int k) {
      int n = s.length();
      string ans = "";
      for(int i=0; i<n; i++){
        int cnt = 0;
        string may  = "";
      
        for(int j=i; j<n; j++){
            may += s[j];
    
      if(s[j] == '1'){
        cnt++;
      }
      if(cnt > k) break;

      if(cnt == k){
         
         if(ans == "" || may.size() < ans.size() || may.size() == ans.size() && may < ans){
            ans = may;
         } 
      }
        }
      }
      return ans;
    }
};