class Solution {
    public boolean validPalindrome(String s) {
        
        return (validPalindrome1(s)||validPalindrome2(s));
        
    }
    
    public boolean validPalindrome1(String s) 
    {
        int i=0, j=s.length()-1; 
        int count=0; 
        while(i<j && count<=1)       
        {
            if(s.charAt(i)==s.charAt(j))
            {
                i++;
                j--;
            }
            else
            {
                if(s.charAt(i+1)==s.charAt(j)) 
                {
                    
                    i++;
                    count++;
                }
                else if(s.charAt(i)==s.charAt(j-1))
                {
                    j--;
                    count++;
                }
                
                else        
                    return false;
                
                if(count>1)     
                {
                    return false;
                }
                
            }   
        }
         return true;
    }
    public boolean validPalindrome2(String s) 
    {
        int i=0, j=s.length()-1; 
        int count=0; 
        while(i<j && count<=1)     
        {
            if(s.charAt(i)==s.charAt(j))
            {
                i++;
                j--;
            }
            else
            {
                if(s.charAt(i)==s.charAt(j-1)) 
                {
                    j--;
                    count++;
                }
                else if(s.charAt(i+1)==s.charAt(j)) 
                {
                    i++;
                    count++;
                }
                
                
                else         
                    return false;
                
                if(count>1)    
                {
                    return false;
                }
                
            }   
        }
         return true;
    }
    
    
}