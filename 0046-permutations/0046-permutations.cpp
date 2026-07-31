class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutate(nums, ans, 0);
        return ans;
    }

    void permutate(vector<int> &nums, vector<vector<int>> &ans, int idx){
      int n = nums.size();
      if(idx == n){
        ans.push_back(nums);
        return;
      }

      for(int i = idx; i<n; i++){
        swap(nums[i], nums[idx]);
        permutate(nums, ans, idx+1);
        swap(nums[i], nums[idx]);
      }
    }
};