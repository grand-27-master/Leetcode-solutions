class Solution {
    public void rotate(int[] nums, int k) {
//         int[] temp=new int[k];
         int n=nums.length;
        
//         for(int i=0;i<k;i++)
//             temp[i]=nums[i];
        
//         for(int i=k;i<n;i++)
//             nums[i-k]=nums[i];
        
//         for(int i=0;i<k;i++)
//             nums[n-k+i]=temp[i];
        
        k=k%n;
        
         reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
    static void swap(int[] nums, int i, int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    
    static void reverse(int[] nums,int l, int r)
    {
        while(l<r)
        {
            swap(nums,l,r);
            l++;
            r--;
        }
    }
}