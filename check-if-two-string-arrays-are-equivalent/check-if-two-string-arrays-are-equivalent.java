class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        int n=word1.length;
        int m=word2.length;
        
        String s1="";
        String s2="";
        
        for(int i=0;i<n;i++){
            //s1.concat(word1[i]);
            s1+=word1[i];
        }
        
        for(int i=0;i<m;i++){
            //s2.concat(word2[i]);
            s2+=word2[i];
        }
        
        if(s1.equals(s2))
            return true;
       
        return false;
    }
}