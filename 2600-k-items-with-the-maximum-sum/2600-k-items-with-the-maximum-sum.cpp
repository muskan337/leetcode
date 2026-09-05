class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int n = numOnes + numZeros + numNegOnes;
        vector<int> nums(0, n);

        int sum = 0;

        for(int i=0; i<numOnes; i++){
            nums.push_back(1);
        }
       
        for(int i=0; i<numZeros; i++){
            nums.push_back(0);
        }
       
        for(int i=0; i<numNegOnes; i++){
            nums.push_back(-1);
        }
       
       for(int i=0; i<k; i++){
      sum += nums[i];
       }

       return sum;
    }
};