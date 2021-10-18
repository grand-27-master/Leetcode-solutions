class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
//         vector<int>v;
//         int n=matrix.size();
//         int m=matrix[0].size();
//         int min_row=0,max_col=0;
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 min_row=min(min_row,matrix[i][0]);
//                 max_col=max(max_col,matrix[0][j]);
//             }
//             if(min_row==max_col)
//                 v.push_back(max_col);
//         }
//         return v;
        
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            int rowm = INT_MAX,rowid=-1,coln=INT_MIN;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]<rowm){
                    rowm=matrix[i][j];
                    rowid=j;
                }
            }
            for(int k=0;k<matrix.size();k++){
                if(matrix[k][rowid]>coln){
                    coln = matrix[k][rowid];
                }
            }
            if(rowm==coln)
                v.push_back(rowm);
        }
        return v;
    }
};