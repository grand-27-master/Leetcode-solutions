class Solution {
    public boolean isLongPressedName(String name, String typed) {
        if(name.length()>typed.length())
           return false;    
        if(name.equals(typed))
            return true;
        char c1 [] = name.toCharArray();
        char c2 [] = typed.toCharArray();
        int i=0;
        int j=0;
        while(i<name.length() && j<typed.length()){
            if(c1[i]==c2[j])
            {
                i++;
                j++;
            }
            else if(c1[i]!=c2[j] && i>0 && c1[i-1]==c2[j])
            {
                j++;
            }
            else
            {
                return false;
            }
        }
        if(i!=name.length())
        {
            return false;
        }
        while(j<typed.length())
        {
            if(c1[name.length()-1]!=c2[j])
            {
                return false;
            }
            j++;
        }
        return true;
    }
}