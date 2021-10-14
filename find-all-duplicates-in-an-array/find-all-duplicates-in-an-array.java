class Solution {
    public List<Integer> findDuplicates(int[] arr) {
        
        int n=arr.length;
        List<Integer>l=new ArrayList<>();
        
        int correct_idx;
        int i=0;

        while (i<arr.length) {
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
                l.add(arr[j]);
        }
        return l;
    }
}