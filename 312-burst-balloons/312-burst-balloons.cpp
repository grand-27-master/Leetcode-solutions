class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
      //  int coins;
        // including both out of bounds cases
        int n=nums.size()+2;
        
//         for(int i=0;i<n;i++)
//         {
//             if(i==0)
//                 nums[i-1]=1;
            
//             if(i==n-1)
//                 nums[i+1]=1;
            
//            coins= nums[i - 1] * nums[i] * nums[i + 1];
//         }
//         return coins;
        
        vector<vector<int>> dp(n, vector<int>(n));
        vector<int> new_nums(n, 1);
        int i = 1;
        for(auto num : nums) {
            new_nums[i++] = num;
        }
        
         for(int len = 2; len <= n; len++) { 
            //iterate from interval length from 2 to n
            for(int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                //select between left and right boundary (i, j)
                for(int k = i + 1; k < j; k++) { 
                    dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + new_nums[i] * new_nums[k] * new_nums[j]);
                }
            }
        }
        return dp[0][n - 1];
    }
};