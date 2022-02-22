class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        
        while(n>0)
        {
            n--;
            s=(char)('A'+n%26)+s;
            n/=26;
        }
        return s;
    }
};