class Solution {
    public boolean halvesAreAlike(String s) {
        int n=s.length();
        String a="";
        String b="";
        
        int a_count=0;
        int b_count=0;
        
        for(int i=0;i<n/2;i++)
            a+=s.charAt(i);
        
        for(int i=n/2;i<n;i++)
            b+=s.charAt(i);
        
        for(int i=0;i<a.length();i++)
        {
            if(a.charAt(i)=='a' || a.charAt(i)=='i' || a.charAt(i)=='e' || a.charAt(i)=='o' || a.charAt(i)=='u' || a.charAt(i)=='A' || a.charAt(i)=='E' || a.charAt(i)=='I' || a.charAt(i)=='O' || a.charAt(i)=='U')
                a_count++;
        }
        
        for(int i=0;i<b.length();i++)
        {
            if(b.charAt(i)=='a' || b.charAt(i)=='i' || b.charAt(i)=='e' || b.charAt(i)=='o' || b.charAt(i)=='u' || b.charAt(i)=='A' || b.charAt(i)=='E' || b.charAt(i)=='I' || b.charAt(i)=='O' || b.charAt(i)=='U')
                b_count++;
        }
        
        if(a_count==b_count)
            return true;
        return false;
    }
}