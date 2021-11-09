class Solution {
public:
    int totalNQueens(int n) {
        
         vector<vector<string>> ans ; // Answer Board
        vector<string> board(n,string(n,'.')) ; // Initial Board ( No Queens )
        return helper(0,board,ans,n);
        
        
    }
    
    int helper(int row, vector<string> board, vector<vector<string>> &ans, int n)
    {
       if(row == n ) {
            ans.push_back(board);
            return 1;
        }
        int count=0;
        
        // Place a queen in all column of the current row, check the validity and backtrack
        for(int col = 0 ; col < n ; col ++ ) {
            if(isValid(board, row, col)) {
                board[row][col] = 'Q';
                count+=helper(row+1, board, ans , n); 
                // Backtrack 
                board[row][col] = '.';
            }
        }
        return count;
    }
    
    bool isValid(vector<string> board, int row, int col){
        
        // Check if the chosen column has any other queen in previous rows
        for(int i = row -1 ; i >= 0 ; i-- ) {
            if(board[i][col] == 'Q') return false ;
        }
        
        // Check diagonally left up (previous)
        for(int i = row - 1, j = col - 1 ; i>=0 and j>=0; i--,j-- ) {
            if(board[i][j] == 'Q') return false ;
        }
        
        // Check diagonally right up (previous)
         for(int i = row - 1, j = col + 1 ; i>=0 and j<board.size() ; i--,j++ ) {
            if(board[i][j] == 'Q') return false ;
        }
        
        // Otherwise 
        return true ;
    }
};