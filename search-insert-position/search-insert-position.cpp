class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      if(nums.size() == 0 || nums[nums.size()-1] < target)   return nums.size();
 
        nums.pop_back();
        return searchInsert(nums,target);
        
    }
};