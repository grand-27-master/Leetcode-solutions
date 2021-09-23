class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        // we have to find the max candy and then compare it to the value
        // when extracandies are added
        
        
        int n=candies.size();
        vector<bool>ans;
        int max_candy=0;
        
        for(int i=0;i<n;i++)
        {
            if(max_candy<candies[i])
                max_candy=candies[i];
        }
        
        for(int i=0;i<n;i++)
        {
            // max_candy=candies[i]+extraCandies;
            if(max_candy<=candies[i]+extraCandies)
                ans.push_back(true);
            else
                ans.push_back(false); 
        }
        return ans;
    }
};