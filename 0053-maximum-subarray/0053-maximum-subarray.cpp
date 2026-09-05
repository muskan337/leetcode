class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = INT_MIN;
        int n= nums.size();
        int sum = 0;
        for(int st=0; st<n; st++){
                sum += nums[st];
           Max = max(sum, Max);
           if(sum < 0){
            sum = 0;
           }
            }
        return Max;
    }
};