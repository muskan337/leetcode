class Solution {
public:

  void Subsets( vector<int> &ans, int &Sum, vector<int> &nums, int i){
    
    if(i == nums.size()){
        int sum = 0;
        for(int val : ans){
         sum ^= val;
        }
         Sum += sum;
         return;
    }
    ans.push_back(nums[i]);
    Subsets(ans, Sum, nums, i+1);

    ans.pop_back();
    Subsets(ans, Sum, nums, i+1);

 }
    int subsetXORSum(vector<int>& nums) {
    vector<int> ans;
    int Sum = 0;
    Subsets(ans, Sum, nums, 0);  
    
    return Sum;

    }
};