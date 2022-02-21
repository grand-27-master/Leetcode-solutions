class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
         int n = arr.size();
        
        unordered_map<int, int> mp;
        
        vector<int> res;
        
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto x : mp)
        {
            if(x.second > n / 3)
            {
                res.push_back(x.first);
            }
        }
        
        return res;
        
    }
};