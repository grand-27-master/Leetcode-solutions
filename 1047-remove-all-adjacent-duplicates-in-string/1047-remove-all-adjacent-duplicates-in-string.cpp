class Solution {
public:
    string removeDuplicates(string str) {
//         string ans="";
//         ans+=s[0];
        
//         for(int i=1;i<s.size();i++)
//         {
//             if(s[i]!=s[i-1])
//                 ans+=s[i];
//         }
//      return ans;
        
         string ans = "";
        for (char ch: str) {
            if ( ans.size() != 0 and ans.back() == ch )
                ans.pop_back();
            else
                ans.push_back(ch);
        }
        return ans;
    }
};