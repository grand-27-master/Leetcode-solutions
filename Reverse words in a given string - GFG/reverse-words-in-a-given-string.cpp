// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n=S.size();
       // vector<string>v;
        string rev="",temp="";
        
        for(int i=0;i<n;i++)
        {
            if(S[i]=='.')
           {
               reverse(temp.begin(),temp.end());
               temp+=S[i];
               rev+=temp;
               temp="";
           }
           else
           temp+=S[i];
        }

        reverse(temp.begin(),temp.end());
        rev+=temp;
        reverse(rev.begin(),rev.end());
        
        return rev;
        
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends