class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allSubsets;

        printSubsets(nums, ans, allSubsets, 0);
         return allSubsets;
    }

     void printSubsets(vector<int> &nums, vector<int> &ans,   vector<vector<int>> &allSubsets ,int i){
        int n = nums.size();
        if(i == n){
           allSubsets.push_back(ans);
          return;
        }
        //to include
        ans.push_back(nums[i]);
        printSubsets(nums, ans, allSubsets,  i+1);

    
        ans.pop_back();

        //to exclude
          printSubsets(nums, ans, allSubsets,  i+1);
  
     }
};