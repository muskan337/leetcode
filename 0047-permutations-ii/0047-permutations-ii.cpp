class Solution {
public:

   void unique(vector<int> &nums, int idx, vector<vector<int>> &ans){
    int n = nums.size();
   
   unordered_set<int> s;
    if(idx == n){
        ans.push_back(nums);
        return;
    }

    for(int i=idx; i<n; i++){
       if(s.count(nums[i])){
        continue;
       }else{
        s.insert(nums[i]);
       }
        swap(nums[i], nums[idx]);
        unique(nums, idx+1, ans);
        swap(nums[i], nums[idx]);
    }
   }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       vector<vector<int>> ans;
       
       unique(nums, 0, ans);
       return ans;
    }
};