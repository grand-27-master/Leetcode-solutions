class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<nums[(i+k)%n]<<" ";
        // }
        
       std::rotate(nums.begin(), nums.begin()+n-k%n, nums.end());
    }
};