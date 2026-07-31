class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        vector<vector<int>> allSubsets;
        printSubsets(nums, ans, allSubsets, 0);
        return allSubsets;
    }
  void printSubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &allSubsets,  int i){
    int n = nums.size();

    if(i == n){
        allSubsets.push_back(ans);
        return;
    }
   
   //to include
   ans.push_back(nums[i]);
   printSubsets(nums, ans, allSubsets, i+1);

   ans.pop_back();

   i += 1;
  while(i<n && nums[i] == nums[i-1] ){
    i++;
   }
    printSubsets(nums, ans, allSubsets, i);
  }
};