class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans(2,0);
        
        for(int i=1;i*i<=area;i++)
        {
           if(area%i==0)
           {
               ans[1]=i;
               ans[0]=area/i;
           }
        }
        return ans;
    }
};