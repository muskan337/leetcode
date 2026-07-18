class Solution {
public:

  int SearchInRow(vector<vector<int>> &mat, int tar, int midRow) {
    int c = mat[0].size();
      int st=0, end = c-1;
      while(st<=end){
        int mid = st + (end-st)/2;
        if(tar == mat[midRow][mid]){
            return true;
        } else if(tar > mat[midRow][mid]){
            st = mid+1;
        }else{
            end = mid-1;
        }
      }
  return false;
  }

    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int r = mat.size(), c = mat[0].size();

        int stRow = 0, endRow= r-1;
        while(stRow <= endRow){
            int midRow = stRow + (endRow-stRow)/2;

            if(tar >= mat[midRow][0] && tar <= mat[midRow][c-1]){
                return SearchInRow(mat, tar, midRow);
            } else if(tar >= mat[midRow][c-1]){
                stRow = midRow+1;
            } else{
                endRow = midRow-1;
            }
        }
     return false;
    }
};