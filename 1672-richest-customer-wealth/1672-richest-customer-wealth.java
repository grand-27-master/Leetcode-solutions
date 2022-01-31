class Solution {
    public int maximumWealth(int[][] accounts) {
        int n=accounts.length;
        int m=accounts[0].length;
        int max_value=0;
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
                sum+=accounts[i][j];
            max_value=Math.max(max_value,sum);
        }
        return max_value;
    }
}