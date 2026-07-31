class Solution {
public:


    int search(vector<int>& nums, int tar) {
     int n = nums.size();
        int st = 0, end = n-1;
       return binarySearch(nums, tar, st, end);
    }
    int binarySearch(vector<int> &nums, int tar, int st, int end){
    while(st<= end){
        int mid = st+(end-st)/2;
        if(nums[mid] == tar){
            return mid;
        } else if( nums[mid] >= tar ){
            return binarySearch(nums, tar, st, mid-1);
        }else{
            return binarySearch(nums, tar, mid+1, end);
        }
    }
    return -1;
}
};