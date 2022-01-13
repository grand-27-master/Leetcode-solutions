// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++
#define vvi vector<vector<int>>
#define vi vector<int>
#define vs vector<string>


class Solution{
    private:
    bool limit(int x,int n){ return (x>=0 and x<n);}
    bool isSafe(int x,int y,int n, vvi visited,vvi & m)
    {
        if( limit(x,n) and limit(y,n) and visited[x][y]==0 and m[x][y]==1) return true;
        else return false;
    }
    void solve(vvi &m,int n,vs &ans,int x,int y,vvi visited,string path)
    {
        if(x==n-1 and y==n-1)
        {
            ans.push_back(path);
            return;
        }
        //mark this array once you have traversed (x,y)
        visited[x][y] = 1;
        // Down
        if(isSafe(x+1,y,n,visited,m))
        {
            path.push_back('D');
            solve(m,n,ans,x+1,y,visited,path);
            path.pop_back();
        }
        
        //left
        if(isSafe(x,y-1,n,visited,m))
        {
            path.push_back('L');
            solve(m,n,ans,x,y-1,visited,path);
            path.pop_back();
        }
        
        // right
        if(isSafe(x,y+1,n,visited,m))
        {
            path.push_back('R');
             solve(m,n,ans,x,y+1,visited,path);
            path.pop_back();
        }
        // up
        if(isSafe(x-1,y,n,visited,m))
        {
            path.push_back('U');
             solve(m,n,ans,x-1,y,visited,path);
            path.pop_back();
        }
        //backtrack
       // visited[x][y] = 0;  
    }
    
    public:
    vs findPath(vvi &m, int n) {
        vs ans;
        if(!m[0][0])
            return ans;
        vvi visited = m;
        
        // Initialise visited array with 0
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                visited[i][j] = 0;
        string path = "";
        solve(m,n,ans,0,0,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends