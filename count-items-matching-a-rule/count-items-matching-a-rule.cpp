class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int match=0;
        int n=items.size();
        
        for(int i=0;i<n;i++)
        {
            if(ruleKey=="type" and ruleValue==items[i][0])
                match++;
            if(ruleKey=="color" and ruleValue==items[i][1])
                match++;
            if(ruleKey=="name" and ruleValue==items[i][2])
                match++;
        }
        return match;
    }
};