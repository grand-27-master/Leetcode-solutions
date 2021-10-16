class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int max_sum=0;
        
        for(int i=1;i<nums.size();i=i+2)
        {
            int p1=min(nums[i],nums[i-1]);
           // int p2=min(nums[i+2],nums[i+3]);
            max_sum+=p1;
        }
        return max_sum;
    }
};