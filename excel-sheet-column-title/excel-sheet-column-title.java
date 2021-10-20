class Solution {
    public String convertToTitle(int n) {
        String s="";
        
        while(n>0)
        {
            n--;
            s=(char)('A'+n%26)+s;
            n/=26;
        }
        
        return s;
    }
}