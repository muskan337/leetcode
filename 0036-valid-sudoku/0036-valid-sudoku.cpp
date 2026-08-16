class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
      return  sudoku(board, 0, 0);
         
         }
         
         bool sudoku(vector<vector<char>> &board, int r, int c){
            int nextR = r, nextC = c+1;

         if(nextC == 9){
            nextR = r+1;
            nextC = 0;
         }
         if( r == 9){
            return true;
         }
      
      char val = board[r][c];
      if(board[r][c] == '.'){
        return  sudoku(board, nextR, nextC);
      }
        return isSafe(board, r, c, val) && sudoku(board, nextR, nextC);
    
      return isSafe(board, r, c, val);
         }

         bool isSafe(vector<vector<char>> &board, int r, int c, char val){
            for(int i=0; i<9; i++){
                if(i != r && board[i][c] == val){
                    return false;
                }
            }
            for(int i=0; i<9; i++){
                if(i != c && board[r][i] == val){
                    return false;
                }
            }
            int sr = (r/3)*3;
            int sc = (c/3)*3;
            for(int i = sr; i<= sr+2; i++){
                for(int j=sc; j<=sc+2; j++){
                    if((i != r || j != c) && board[i][j] == val){
                        return false;
                    }
                }
            }
            return true;
         }
    
};