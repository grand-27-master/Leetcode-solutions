class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>it(26,0);
        //int n=sentence.length();
        
        for(int i:sentence)
            // ascii value of a = 97
            it[i-97]++;
        
        for(int i=0;i<it.size();i++)
            if(!it[i])
                return false;
        return true;
    }      
};