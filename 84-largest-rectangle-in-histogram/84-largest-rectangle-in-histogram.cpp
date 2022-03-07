class Solution {
public:
    
    vector<int>nextindex(vector<int>arr1, int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans1(n);
        
        for(int i=arr1.size()-1;i>=0;i--)
        {
            int val1=arr1[i];
            while(s.top()!=-1 and arr1[s.top()]>=val1)
                s.pop();
            ans1[i]=s.top();
            s.push(i);
        }
        return ans1;
    }
    
    
    vector<int>previndex(vector<int>arr1, int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans1(n);
        
        for(int i=0;i<arr1.size();i++)
        {
            int val1=arr1[i];
            while(s.top()!=-1 and arr1[s.top()]>=val1)
                s.pop();
            ans1[i]=s.top();
            s.push(i);
        }
        return ans1;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int max_area=0;
        
        vector<int>prev(n);
        prev=previndex(heights,n);
        vector<int>next(n);
        next=nextindex(heights,n);
        
        for(int i=0;i<n;i++)
        {
            int length=heights[i];
            
            
            if(next[i]==-1)
                next[i]=n;
            
            int width=next[i]-prev[i]-1;
            
            int area=length*width;
            max_area=max(max_area,area);
        }
        
        return max_area;
    }
};