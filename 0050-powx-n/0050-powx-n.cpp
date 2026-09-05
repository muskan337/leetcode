class Solution {
public:
    double myPow(double x, int n) {
      double ans = 1.0;

     long long N = n;

      if(N == 0)  return 1.0;
      if(x == 0)  return 0.0;
      if(x == 1)  return 1;
      if(x == -1) {
        if(N % 2 == 0){
            return 1;
        }
        return -1;
      }

      if( N < 0){
        x = 1/x;
        N = -N;
      }

      while(N > 0){
     if(N % 2 == 0){
        x = x*x;
        N /= 2;
     }else{
        ans *= x;
        N -= 1;
     }
      }
      return ans;
    }
};