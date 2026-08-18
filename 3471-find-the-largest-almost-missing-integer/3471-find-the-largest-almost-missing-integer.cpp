class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
 
 int freq[51] = {0};
  for(int x :nums){
    freq[x]++;
  }
   if(k==1){
    for(int i=50; i>=0; i--){
        if(freq[i] == 1){
             return i;
        }
    }
    return -1;
   }
   else if(k == n){
    int ans = 0;
    for(int x: nums){
    ans =  max(ans, x);
   }
   return ans;
   }
   int ans = -1;
   if(freq[nums[0]] == 1)  {
    ans = max(ans, nums[0]);
   }
   if(freq[nums[n-1]] == 1){
  ans = max(ans, nums[n-1]);
   }
   return ans;
    }
};