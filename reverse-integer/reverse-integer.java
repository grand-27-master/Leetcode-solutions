class Solution {
    public int reverse(int x) {
         boolean neg = x < 0?true:false;
        if(neg)
            x *=-1;
        long res = 0;
        while(x > 0){
            int m = x%10;
            
            res *=10l;
            res += m;
            x = x/10;
        }
        if(res > Integer.MAX_VALUE)
            res =0;
        if(neg)
            return (int) res*-1;
        else
           return (int) res;
    }
}