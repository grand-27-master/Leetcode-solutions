class Solution {
    public boolean judgeCircle(String moves) {
        
        // 4 pointers for 4 directions
        int u=0,d=0,l=0,r=0;
        
        for(char x:moves.toCharArray())
        {
            if(x=='U')
                u++;
            if(x=='D')
                d++;
            if(x=='L')
                l++;
            if(x=='R')
                r++;
        }
        
        if(u==d && l==r)
            return true;
        return false;
    }
}