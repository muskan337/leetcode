class Solution {
public:

  void combSum(vector<int>& nums,  vector<vector<int>> &ans, vector<int> &comb, int target, int idx){
  
   int n = nums.size();



  if(target == 0){
    ans.push_back(comb);
    return;
  }

  if(idx == n || nums[idx] > target){
    return ;
  }
 
 
   comb.push_back(nums[idx]);
   combSum(nums, ans, comb,  target-nums[idx], idx+1);

   comb.pop_back();

   int next = idx+1;
   while(next < n && nums[next] == nums[idx]){
    next ++ ;
   }
   combSum(nums, ans, comb,  target, next);

  }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> comb;

        combSum(nums, ans, comb, target, 0);
        return ans;
    }
};