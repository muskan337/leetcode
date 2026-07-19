class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int l = m.size(), n = m[0].size();
        int  sr = 0, er = l-1, sc = 0, ec = n-1;
        vector<int> ans;

        while(sr <= er && sc <= ec){
            //top
            for(int j=sc; j<=ec ; j++){
       ans.push_back(m[sr][j]);
            }
            //right
             for(int j=sr+1; j<=er ; j++){
       ans.push_back(m[j][ec]);
        }
         for(int j=ec-1; j>=sc ; j--){
            if(sr == er){
                    break;
                }
       ans.push_back(m[er][j]);
    }
     for(int j=er-1; j>=sr+1 ; j--){
        if(sc == ec){
                    break;
                }
       ans.push_back(m[j][sc]);
        }
        sr++, er--, sc++, ec--;
            } 
            return ans;
    }
};