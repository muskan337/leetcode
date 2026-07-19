class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int tar) {
       
        int r= m.size(), c= m[0].size();
        int i=0, j= c-1;

        while(i<r && j>=0){
            if(m[i][j] == tar){
                return true;
            }else if(m[i][j] > tar){
          j--;
            }else {
                i++;
            }
        }
        return false;
    }
};