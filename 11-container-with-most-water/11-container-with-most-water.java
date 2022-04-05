class Solution {
    public int maxArea(int[] height) {
        int area=0;
        int n=height.length;
        
//         Arrays.sort(height);
        
//         int max_val=Math.min(height[n-1],height[n-2]);
        
//         ans=max_val*height[n-2];
//         return ans;
        
        int start=0,end=n-1;
        
        while(start<=end)
        {
            int width=Math.min(height[start],height[end]);
            int len=end-start;
            
            area=Math.max(area,width*len);
            
            if(height[start]>height[end])
                end--;
            else
               start++;
        }
        
        return area;
    }
}