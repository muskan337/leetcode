class Solution {
public:
    int maxArea(vector<int>& height) {
       int n = height.size();
       int lp = 0;
       int rp = n-1;
       int maxWater = 0;
       int currWater = 0;
       int w;
       int ht;
       while(lp < rp){
        w = rp-lp;
        ht = min(height[lp], height[rp]);
        currWater = w * ht;
        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--;
       }
       return maxWater;
    }
};