class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        //int n=nums.size();
        
        for(int i:nums)
        {
            int count=0;
            while(i!=0)
            {
                count++;
                i/=10;
                
            }
            if(count%2==0)
                even++;
           
        }
        return even;
    }
};