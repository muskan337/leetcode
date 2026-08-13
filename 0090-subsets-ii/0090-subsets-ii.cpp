class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      
       sort(nums.begin(), nums.end());
       vector<vector<int>> ans;
       vector<int> all;

       getAllSubsets(0, nums, ans, all);
       return ans;
    }

    void getAllSubsets(int i, vector<int> &nums, vector<vector<int>> &ans, vector<int> &all){
     int n = nums.size();
     if(i == n){
        ans.push_back(all);
        return;
     }

     all.push_back(nums[i]);
     getAllSubsets(i+1, nums,  ans, all);

     all.pop_back();

     i+=1;
     while(i<n && nums[i] == nums[i-1]){
        i++;
     }
     getAllSubsets(i, nums,  ans, all);

    }
};