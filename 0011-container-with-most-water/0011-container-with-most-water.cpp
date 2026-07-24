class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int maxwater = 0;
        int st =0, end = n-1;
        while(st<end){
          int l = end-st;
          int w = min(height[st], height[end]);
          int area =  l*w;
         maxwater =  max(maxwater, area);
         if(height[st] < height[end]){
             st++;
         }else{
            end--;
         }
        }

        return maxwater;
    }
};