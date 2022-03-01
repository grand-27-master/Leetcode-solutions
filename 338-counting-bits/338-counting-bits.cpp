class Solution {
public:
    
    int countOne(int num)
    {
        if(num==0)
            return 0;
        if(num==1)
            return 1;
        
        // check for even no.
        if(num%2==0)
            return countOne(num/2);
        
        // check for odd no.
        else
            return countOne(num/2)+1;
    }
    
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++)
            ans[i]=countOne(i);
        
        return ans;
    }
};