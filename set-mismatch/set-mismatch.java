class Solution {
    public int[] findErrorNums(int[] arr) {
        int n=arr.length;
        int[] ans={-1,-1};
        
        int correct_idx;
        int i=0;

        while (i<n) {
            correct_idx=arr[i]-1;

            if(arr[i]!=arr[correct_idx])
            {
                int temp=arr[i];
                arr[i]=arr[correct_idx];
                arr[correct_idx]=temp;
            }
            else
            i++;
        }
        
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=j+1)
                return new int[]{arr[j],j+1};
        }
        return ans;
    }
}