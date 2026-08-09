class Solution {
public:

  set<vector<int>> s;
 
     void getAllComb(vector<int> & can, int idx, int tar,  vector<int> &comb, vector<vector<int>> &ans){
        int n= can.size();

         if(idx == n || tar <0){
        return;
       }
       if(tar == 0){
        if(s.find(comb) == s.end()){
        ans.push_back(comb);
        s.insert(comb);
        }
        return;
       }
      

        comb.push_back(can[idx]);
        getAllComb(can, idx+1, tar-can[idx], comb, ans);
        getAllComb(can, idx, tar-can[idx], comb, ans);
        comb.pop_back();
        getAllComb(can, idx+1, tar, comb, ans);

       
    }


 
    vector<vector<int>> combinationSum(vector<int>& can, int tar) {
        vector<int> comb;
    vector<vector<int>> ans;

  getAllComb(can, 0, tar, comb, ans);

  return ans;
    }
};