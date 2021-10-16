class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        
        for(auto x:nums)
            v.push_back(x*x);
        
        sort(v.begin(),v.end());
        return v;
    }
};