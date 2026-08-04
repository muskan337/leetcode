class Solution {
public:

 
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int st=0, end = n-1;
        while(st<end){
        if(isalpha(s[st]) && isalpha(s[end])){
                 swap(s[st++], s[end--]);
        } else if(isalpha(s[st])){
            end--;
        }else{
            st++;
        }
        }
        return s;
    }
};