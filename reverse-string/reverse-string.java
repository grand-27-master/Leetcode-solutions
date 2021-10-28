class Solution {
    public void reverseString(char[] s) {
        
//         int l=s.length;
//         char[] str=new char[l];
        
//         for(int i=l-1;i>=0;i--)
//             str[i]=s[i];
        
//         for(int i=0;i<l;i++)
//             System.out.print(str[i]+" ,");
        
        
        int i=0,j=s.length-1;
        while(i<=j)
        {
            
            if(s[i]==s[j])
            {
                i++;
                j--;
                continue;
            }
            
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            
            i++;
            j--;
        }
    }
}