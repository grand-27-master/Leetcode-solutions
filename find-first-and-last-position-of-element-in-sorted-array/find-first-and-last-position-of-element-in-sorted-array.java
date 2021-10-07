class Solution {
    public int[] searchRange(int[] nums, int target) {
       int[] result={-1,-1};
        
        result[0]=search(nums,target,true);
        result[1]=search(nums,target,false);
        
        return result;
    }
    
    int search(int[] nums,int target,boolean start_index)
    {
         int ans=-1;
         int n=nums.length-1;
        
        
        int start=0,end=n;
        while(start<=end)
        {
            int mid=(start+end)/2;
            
            if(target>nums[mid])
                start=mid+1;
            
            else if(target<nums[mid])
                end=mid-1;
            
            else
            {
                ans=mid;   
                if(start_index==true)
                    end=mid-1;
                else
                    start=mid+1;
            }
            
        }
        return ans;
    }
}