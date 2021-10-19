class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str="";
        char ch[10000];
        
        for(int i=0;i<indices.size();i++)
            ch[indices[i]]=s[i];
        
        for(int i=0;i<indices.size();i++)
            str+=ch[i];
        
        return str;
    }
};