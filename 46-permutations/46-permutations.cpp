class Solution {
    private:
      void solve(vector<int>nums, int idx, vector<vector<int>>&ans)
               {
                   if(idx>=nums.size())
                   {
                       ans.push_back(nums);
                       return;
                   }
                   
                   for(int i=idx;i<nums.size();i++)
                   {
                       swap(nums[idx],nums[i]);
                       solve(nums,idx+1,ans);
                       swap(nums[idx],nums[i]);
                   }
               }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        // vector<int>res;
        int idx=0; 
        
        solve(nums,idx,ans);
        
        return ans;
    }
    
  
};