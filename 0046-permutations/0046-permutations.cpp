class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allPer;
        vector<bool> isUsed(nums.size(), false);

        permu(nums, ans, allPer, isUsed);
        return allPer;
    }

    void permu(vector<int> &nums, 
    vector<int> &ans, 
    vector<vector<int>> &allPer, 
    vector<bool> &isUsed){

        int n = nums.size();
        int i = ans.size();
        if(i == n){
            allPer.push_back(ans);
            return;
        }

        for(int i=0; i<n; i++){

            if(isUsed[i] == true){
                continue;
            }
        

        ans.push_back(nums[i]);
            isUsed[i] = true;

            permu(nums, ans, allPer, isUsed);

            ans.pop_back();
            isUsed[i] = false;
        }
    }
};