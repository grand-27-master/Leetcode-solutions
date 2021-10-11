class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            st.insert(nums1[i]);//inserting elements of nums1 into unordered set
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(st.find(nums2[i]) != st.end()) //searching for nums2 values in ordered set
            {
               ans.push_back(nums2[i]);
                st.erase(nums2[i]);// erasing the value bcoz the value should not repeat
            }
        }
        return ans;
    }
};