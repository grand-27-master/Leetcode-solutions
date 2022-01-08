class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;i<matrix[0].size();j++)
//             {
                
//             }
//         }
        
        transpose(matrix);
        reflect(matrix);
    }
    
    void transpose(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        int temp;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                temp=matrix[j][i];
                matrix[j][i]=matrix[i][j];
                matrix[i][j]=temp;
            }
        }
    }
    
    void reflect(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        int temp;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=temp;
            }
        }
    }
};