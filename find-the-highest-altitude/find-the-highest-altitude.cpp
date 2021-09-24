class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //int n=gain.size();
        int alt=0,max=0;
        
        for(int i=0;i<gain.size();i++)
        {
            alt+=gain[i];
            if(alt>max)
                // alt++;
                max=alt;
        }
        return max;
    }
};