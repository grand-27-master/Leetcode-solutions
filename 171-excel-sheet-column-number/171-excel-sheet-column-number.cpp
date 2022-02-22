class Solution {
public:
    int titleToNumber(string s) {
        int ans=0;
        
        for(auto x:s)
        {
            int val=x-'A'+1;
            ans*=26;
            ans+=val;
        }
        return ans;
    }
};