class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        // LINEAR SEARCH: O(N^2);
        
        // for(int i=0;i<matrix.length;i++)
        // {
        //     for(int j=0;j<matrix[0].length;j++)
        //     {
        //         if(matrix[i][j]==target)
        //             return true;
        //     }
        // }
        // return false;
        
        
        // BINARY SEARCH: O(LOGN)
        
        int n=matrix.length;
        int m=matrix[0].length;
        int s=0,e=n*m-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            
            if(target==matrix[mid/m][mid%m])
                return true;
            else if(matrix[mid/m][mid%m]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return false;
    }
    
}