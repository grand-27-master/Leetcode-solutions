class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        
        //pointing to mid of array
        int pointer=n;
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[pointer]);
            pointer++;
            
        }
        return ans;
        
    }
};