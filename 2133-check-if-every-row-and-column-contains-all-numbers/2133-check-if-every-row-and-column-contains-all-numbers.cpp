class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        int n = mat.size();
       return check( mat, 0, 0, n);

    }

    bool check(vector<vector<int>>& mat, int row, int col, int n){
       int nextR= row, nextC = col+1;
  
       if( row == n){
        return true;
       }

       if(nextC == n){
        nextC = 0;
        nextR = row+1;
       }

       char c = mat[row][col];
       return isSafe(mat, row, col, c,  n) && check(mat, nextR, nextC, n);
    }

    bool isSafe(vector<vector<int>>& mat, int R, int C, int c, int n){

    if(c<1 || c> n)   return false;

     for(int i=0; i<n; i++){
      if(i != R && mat[i][C] == c){
        return false;
      }
     }

     for(int j=0; j<n; j++){
      if(j != C && mat[R][j] == c){
        return false;
      }
     }
     return true;
    }
};