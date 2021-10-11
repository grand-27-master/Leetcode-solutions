class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>s;
        vector<int>v;
        
        for(auto x:nums1)
            s.insert(x);
        
        for(int i=0;i<nums2.size();i++)
        {
            auto it=s.find(nums2[i]);
            if(it!=s.end())
            {
                v.push_back(nums2[i]);
              //  v.push_back(2);
                s.erase(it);
            }
        }
        
        return v;
    }
};