class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n=grid.size();
        int sum = 0;
        int SUM = 0;
        int a;
        int b;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                sum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(grid[i][j]);
                }
                s.insert(grid[i][j]);
                
            }
        }
      SUM = (n*n) * (n*n + 1)/2;
        b = SUM-sum+a;
        ans.push_back(b);

        return ans;
    }
};