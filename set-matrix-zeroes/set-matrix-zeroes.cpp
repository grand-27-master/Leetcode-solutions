class Solution {
public:
     void set(vector<vector<int>>& temp,int row,int col){
        
        //Set Row Elements zero
        
        for(int i=0;i<temp[0].size();i++)
            temp[row][i] = 0;
        
        //Set Col Elements zero
        
        for(int i=0;i<temp.size();i++)
            temp[i][col] = 0;
    }
    
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();    
        
        vector<vector<int>> temp = matrix;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!matrix[i][j])
                    set(temp,i,j);
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
                matrix[i][j] = temp[i][j];
        }
        
        
    }
};