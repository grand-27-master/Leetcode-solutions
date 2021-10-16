class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        // sort in descending order
       sort(nums.begin(),nums.end(),greater<int>());
        int res=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]+nums[i+1]<=nums[i+2]||
              nums[i]+nums[i+2]<=nums[i+1]||
              nums[i+2]+nums[i+1]<=nums[i]){
                continue;
            }
             return nums[i]+nums[i+1]+nums[i+2];
        }
        
        return 0;
    }
};