class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size();
        while(n!=0 and s.find(part)<n)
            s.erase(s.find(part),part.size());
        return s;
    }
};