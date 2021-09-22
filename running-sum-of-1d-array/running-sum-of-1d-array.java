class Solution {
    public int[] runningSum(int[] nums) {
        int[] rsum=new int[nums.length];
        int n=nums.length;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            rsum[i]=sum;
        }
        
        return rsum;
    }
}