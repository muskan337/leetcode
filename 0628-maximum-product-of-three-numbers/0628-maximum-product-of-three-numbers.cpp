class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int p1 = 1;
        int p2 = 1;
        int MAX = 1;
        sort(nums.begin(), nums.end());
       
            p1 = nums[n-1]* nums[n-2]*nums[n-3];
             p2 = nums[0] *nums[1]*nums[n-1];
             MAX = max(p1, p2);
 
        return MAX;
    }
};