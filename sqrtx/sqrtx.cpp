class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) 
           return x;
        int start = 0;
        int end = x/2;
        int ans;   
        while (start <= end) 
        {        
            long long int mid = (start + end) / 2;
            // mid is long long int necessary. Because sometime it can be hapenned that by multiplying two integer it overflow int range. For a safer side better to use long int or long long int
            if (mid*mid == x)
                return mid;
            
            if (mid*mid < x) 
            {
                start = mid + 1;
                ans = mid;
            } 
            else 
                end = mid - 1;        
        }
        return ans;
    }
};