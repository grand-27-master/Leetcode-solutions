class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0,sum=0;
        
        for(auto i:nums)
            sum+=i;
        
        for(int i=0;i<nums.size();i++)
        {
            if(leftsum==(sum-leftsum-nums[i]))
                return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};