class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
         int freq = 1;
        int n = nums.size();
        sort(nums.begin(), nums.end());

         

        for(int i=1; i<n; i++){
       if(nums[i] == nums[i-1]){
        freq++;
       }
       else{
        if(freq > n/3){
            ans.push_back(nums[i-1]);
        }
        freq = 1;
       }
        }
        if(freq> n/3){
            ans.push_back(nums[n-1]);
        }
        return ans;
    }
};