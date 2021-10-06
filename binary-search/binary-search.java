class Solution {
    public int search(int[] nums, int target) {
        int n=nums.length;
        int s=0,e=n-1;
        
        while(s<=e)
        {
            int m=(s+e)/2;
            
            if(nums[m]==target)
                return m;
            
            else if(target<nums[m])
                e=m-1;
            else
                s=m+1;
        }
        return -1;
    }
}