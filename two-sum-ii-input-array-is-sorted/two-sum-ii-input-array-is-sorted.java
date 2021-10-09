class Solution {
    public int[] twoSum(int[] arr, int target) {
       int[] ans={-1,-1};
       int s=0,e=arr.length-1;
        
        while(s<=e)
        {
            if(arr[s]+arr[e]==target)
                return new int[]{s+1,e+1};
            
            else if(arr[s]+arr[e]<target)
                s++;
            else
                e--;
        }
        return ans;
        
    }
}