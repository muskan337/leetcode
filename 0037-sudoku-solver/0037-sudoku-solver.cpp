class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
         sudoku(board, 0, 0);
    }

    bool isSafe(vector<vector<char>>&board , int row, int col, char dig){
     
   for(int i=0; i<9; i++){
         if(board[i][col] == dig ){
            return false;
         }
   }

         for(int j=0; j<9; j++){
             if(board[row][j] == dig ){
            return false;
         }
         }

//grid
        int sr = (row/3)*3;
        int sc = (col/3)*3;
         for(int i=sr; i<=sr+2; i++){
            for(int j= sc; j<=sc+2; j++){
                if(board[i][j] == dig){
                    return false;
                }
            }
         }
        
   
 return true;
    }

    bool sudoku(vector<vector<char>>& board,int row, int col){
     int nextR = row, nextC = col+1;

     if(nextC == 9){
        nextR = row+1;
        nextC = 0;
     }

     if(row == 9){
        return true;
     }

     if(board[row][col] != '.'){
       return sudoku(board, nextR, nextC);
     }

        for( char dig='1'; dig<='9'; dig++){
            if(isSafe(board, row, col, dig)){
                board[row][col] = dig;
                if(sudoku(board, nextR, nextC)){
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
};