class Solution {
    
    
    private:
    void solve(vector<int>nums,vector<int>output, int idx, vector<vector<int>>&ans)
    {
        int n=nums.size();
        if(idx>=n)
        {
            ans.push_back(output);
            return;
        }
        
        //excluding
         solve(nums,output,idx+1,ans);
        
        //including
        int val=nums[idx];
        output.push_back(val);
         solve(nums,output,idx+1,ans);
    }
    
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int n=nums.size();
        int idx=0;
        
        solve(nums,output,idx,ans);
        
        return ans;
        
    }
};