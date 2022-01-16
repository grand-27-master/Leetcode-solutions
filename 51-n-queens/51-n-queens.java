class Solution {
    List<List<String>> lst = new ArrayList<List<String>>();
    public List<List<String>> solveNQueens(int n) {
        boolean[][] board = new boolean[n][n];
        nQueen(board,n,0);
        return lst;
    }
    
    public void display(boolean[][] board){
        
        List<String> lt = new ArrayList<>();
        
        for(int i = 0; i < board.length; i++){
            StringBuilder st = new StringBuilder();
            for(int j = 0 ; j < board[0].length; j++){
                if(board[i][j] == true){
                    st.append('Q');
                }
                else{
                    st.append('.');
                }
            }
            lt.add(st.toString());
        }
        lst.add(lt);
    }
    
    public void nQueen(boolean[][] board,int n,int row){
        if(n == 0){
            display(board);
            return ;
        }
        
        if(row >= board.length){
            return ;
        }
        
        for(int col = 0; col < board[0].length; col++){
            if(isSafe(board,row,col)){
                board[row][col] = true;
                
                nQueen(board , n-1 , row + 1);
                
                board[row][col] = false;
            }
        }
    }
    
    public boolean isSafe(boolean[][] board,int row,int col){
        //current column
        for(int i = row - 1,j = col; i >= 0 ; i--){
            if(board[i][j] == true){
                return false;
            }
        }
        
        //left diagonal
        for(int i = row - 1,j = col - 1; i >= 0 && j >= 0; i--,j--){
            if(board[i][j] == true){
                return false;
            }
        }
        
        //right diagonal
        for(int i = row - 1, j = col + 1; i >= 0 && j < board[0].length; i--,j++){
            if(board[i][j] == true){
                return false;
            }
        }
        return true;
    }
}