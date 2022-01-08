class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//        int n=nums.size();
//         vector<int>temp;
        
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]!=0)
//                 temp.push_back(nums[i]);
//             else
//                 break;
//         }
        
//         int i=0,j=nums.size()-1;
        
//         while(i<j)
//         {
//             if(nums[i]==0)
//             {
//                 nums[j]=nums[i];
//                 nums[i+1]=nums[i];
//                 j--;
//             }
//             else
//                 i++;
//         }
        
        int pointer=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
                swap(nums[i],nums[pointer]);
                pointer++;
            }
            
    
        }
        
    }
};