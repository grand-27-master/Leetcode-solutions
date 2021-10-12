class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //int n=nums.size();
        
        for(auto x:nums)
        {
            if(target==x)
                return true;
        }
        return false;
    }
};