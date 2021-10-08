class Solution {
    public int peakIndexInMountainArray(int[] arr) {
//         int n=arr.length;
//         int max_val=0;
//         boolean flag=true;
        
//         for(int i=0;i<n;i++)
//         {
//             max_val=Math.max(max_val,arr[i]);
//         }
//         return max_val;
        
         int start =0;
    int end = arr.length-1;
    
    while(start<end){
        int mid = start +(end-start)/2;
        
        if(arr[mid]>arr[mid+1]){
            end =mid;
        } else{
            start =mid+1;
        }
    }
    
    return start;

       
    }
}