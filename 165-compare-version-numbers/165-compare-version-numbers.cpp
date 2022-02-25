class Solution {
public:
    int compareVersion(string s1, string s2) {
        int i=0,j=0;
        
        while(i<s1.size() or j<s2.size())
        {
            int n1=0,n2=0;
            
            while(i<s1.size() and s1[i]!='.')
            {
                n1 = n1 * 10 + (s1[i] - '0');
                i++;
            }
         
            while(j<s2.size() and s2[j]!='.')
            {
                n2 = n2 * 10 + (s2[j] - '0');
                j++;
            }
            
           if(n1 > n2)
                return 1;
            
            else if(n1 < n2)
                return -1;
            
            i++;
            
            j++;
        }
        return 0;
    }
};