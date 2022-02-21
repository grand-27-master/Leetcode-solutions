class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
        
        // brute force
//         int val=n/2;
       
        
//         for(auto x:nums)
//         {
//              int count=0;
//             for(auto y:nums)
//             {
//                 if(x==y)
//                     count+=1;
//             }
            
//             if(count>val)
//                 return x;
//         }
        
//         return -1;
        
        // optimized
        
        sort(nums.begin(),nums.end());
        
        int val=nums[n/2];
        return val;
    }
};