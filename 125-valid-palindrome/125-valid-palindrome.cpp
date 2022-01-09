class Solution {
public:
    bool isPalindrome(string s) {
//         transform(s.begin(), s.end(), s.begin(), ::toupper);
//         string s2="";
         string str="";
        
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]!=' ')
//                 s2.push_back(s[i]);
//         }
        
//         for(int i=s2.size()-1;i>=0;i--)
//             str.push_back(s2[i]);
        
//         if(str==s2)
//             return true;
//         return false;
        
         for(int i=s.size()-1;i>=0;i--)
         {
             if(isalnum(s[i]))
                 str.push_back(tolower(s[i]));
         }
        string temp=str;
        reverse(temp.begin(),temp.end());
        
        return temp==str;
    }
};