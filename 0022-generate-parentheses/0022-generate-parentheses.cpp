class Solution {
public:

    void parenthesis( vector<string> &ans, string &paren, int open, int close){
        if(open == 0 && close == 0){
            ans.push_back(paren);
            return;
        }
        if(open>0){
            paren.push_back('(');
            parenthesis( ans, paren, open-1, close);
            paren.pop_back();
        }

        if(close > open){
            paren.push_back(')');
            parenthesis( ans, paren, open, close-1);
            paren.pop_back();
        }


       
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string paren = "";
        int open = n, close = n;

        parenthesis(ans, paren, open, close);
        return ans;
    }
};