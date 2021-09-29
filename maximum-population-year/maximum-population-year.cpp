class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
         vector<int> count(101,0);
        for(auto it : logs){
            count[it[0] - 1950] += 1;
            count[it[1] - 1950] -=1 ;
        }
        // prefix sum
        for(int i = 1; i<101; i++){
            count[i] += count[i-1];  
        }
        // calculating maxalive and minyear from the vector count
        int maxalive =0;
        int minyear = 0;
        for(int i =0; i<101; i++){
            if(maxalive < count[i]){
                maxalive = count[i];
                minyear = i;
            }
        }
        return minyear+1950;
        
    }
};