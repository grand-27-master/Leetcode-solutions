class Solution {
    public int firstMissingPositive(int[] nums) {
//          int n=nums.length;
//          int i=0,correct_idx;
        
//         while(i<n)
//         {
//             correct_idx=nums[i]-1;
            
//             if(nums[i]>0 && nums[i]<=n && nums[i]!=nums[correct_idx])
//             {
//                 int temp=nums[i];
//                 nums[i]=nums[correct_idx];
//                 nums[correct_idx]=temp;
//             }
//             else
//                 i++;
//         }
        
//         // 1st case: when index dosen't match with value 
//         for(int j=0;j<n;j++)
//         {
//             if(nums[j]!=j+1)
//                 return j;
//         }
        
//         // 2nd case: when value is same as size
//         return n+1;
        
        
         int i = 0;
        while (i < nums.length){
            int correct = nums[i] - 1;
            if(nums[i] > 0 && nums[i] <= nums.length && nums[i]!= nums[correct]){
                swap(nums, i, correct);
            } else {
                i++;
            }
        }
        //search for first missing number
        for (int index = 0; index < nums.length; index++) {
            if(nums[index]!= index + 1){
                return index + 1;
            }
        }

        return nums.length + 1;

    }

    void swap (int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
    
}