class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n-1;
        int left = -1, right = -1;
           while(s <= e){
            int m = s + (e-s)/2;
            if(nums[m] == target){
                left =  m;
                e = m-1;
            }else if(nums[m] > target){
                e = m-1;
            }else{
                s = m +1;
            }
           } 
           s = 0;
           e = n-1;
           while(s <= e){
             int m = s + (e-s)/2;
            if(nums[m] == target){
               right  =  m;
                s = m+1;
            }else if(nums[m] > target){
                e = m-1;
            }else{
                s = m +1;
            }
           }
           return {left, right};
    }
};