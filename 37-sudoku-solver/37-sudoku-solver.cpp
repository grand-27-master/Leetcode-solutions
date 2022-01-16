class Solution {
public:
	//varification functio- character c can put on board[row][col] or not
    bool isValid(vector<vector<char>>& board, int row, int col, char c)
    {
        for(int i = 0; i < 9; i++) 
        {
            if(board[i][col] == c)  //Each of the digits 1-9 must occur exactly once in each row.
                return false; 
            
            if(board[row][i] == c) //Each of the digits 1-9 must occur exactly once in each column.
                return false; 
            
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) //Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
                return false; 
        }
        return true;
    }    

    bool solve(vector<vector<char>>& board)
    {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == '.')
                {
                    for(char c = '1'; c <= '9'; c++)
                    {
                        if(isValid(board, i, j, c)) //checking c digit can put that position or not
                        {
                            board[i][j] = c; 
                            
                            if(solve(board))  //if borad is fully solved return true                        
								return true; 
                            else
                                board[i][j] = '.'; 
                        }
                    } 
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) 
    {
        solve(board);
    }
        
};