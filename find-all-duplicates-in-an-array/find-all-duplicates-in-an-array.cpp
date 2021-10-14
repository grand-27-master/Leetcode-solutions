class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
//        vector<int>v;
        
//        int correct_idx;
//        int i=0;

//         while (i<arr.size()) {
            
//             if(arr[i]!=i+1){
//             correct_idx=arr[i]-1;


//             if(arr[i]!=arr[correct_idx])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[correct_idx];
//                 arr[correct_idx]=temp;
//             }
//              else
//                     v.push_back(i);
//             }
//             else
//             i++;
//         }
        
//         return v;
        
         vector<int>p;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                p.push_back(nums[i]);
            }
        }
        return p;
    }
};