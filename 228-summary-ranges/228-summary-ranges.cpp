class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
          vector<string> res;
        
        //Start iterating through the array
        for(int i = 1, start = 0; i <= nums.size(); i++)
        {
            //if we do not have a continuous range, we need to push to res
            if(i == nums.size() || nums[i] != nums[i-1] + 1)
            {
                //If we have more than 2 elements, add the range.
                if(i - start > 1)
                    res.push_back(to_string(nums[start]) + "->" + to_string(nums[i-1]));
                //Else add the element.
                else
                    res.push_back(to_string(nums[start]));
                
                //Update start index
                start = i;
            }
        }
        return res;
    }
};