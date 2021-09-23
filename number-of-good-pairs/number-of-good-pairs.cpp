class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int n=nums.size();
        int good_pairs=0;
        
        for(int i=0;i<n;i++)
        {
            // int j=i+1;
            for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j] and i<j)
                good_pairs++;
            }
        }
        return good_pairs;
    }
};