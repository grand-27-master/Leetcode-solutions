class Solution {
public:
    int findDuplicate(vector<int>& arr) {
       int correct_idx;
       int i=0;

        while (i<arr.size()) {
            
            if(arr[i]!=i+1){
            correct_idx=arr[i]-1;


            if(arr[i]!=arr[correct_idx])
            {
                int temp=arr[i];
                arr[i]=arr[correct_idx];
                arr[correct_idx]=temp;
            }
             else
                    return arr[i];
            }
            else
            i++;
        }
        
        // for(int j=0;j<arr.size();j++)
        // {
        //     if(arr[j]!=j)
        //         return arr[j]+1;
        // }
         return 0;
    }
};