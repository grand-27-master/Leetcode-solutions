class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>arr(n);
        int ans=0;
        
       for(int i=0;i<n;i++)
           arr[i]=start + 2 * i;
        
        for(auto x:arr)
            ans^=x;
        return ans;
    }
};