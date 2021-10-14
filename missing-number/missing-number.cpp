class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0,correct_idx;
        
        while(i<n)
        {
            correct_idx=nums[i];
            
            if(nums[i]<n and nums[i]!=nums[correct_idx])
            {
                int temp=nums[i];
                nums[i]=nums[correct_idx];
                nums[correct_idx]=temp;
            }
            else
                i++;
        }
        
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=j)
                return j;
        }
        
        return n;
    }
};