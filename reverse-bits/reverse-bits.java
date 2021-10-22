public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {/*
        int rev_n=0;
        
        while(n>0)
        {
            rev_n=rev_n*10+n%10;
            n/=10;
        }
        
      //  return rev_n;
        
          int decimal = 0;  
          int no = 0;  
        
          while(true)
          {
              if(rev_n==0)
                  break;
              else{
              int temp = rev_n%10;  
              decimal += temp*Math.pow(2, n);  
              rev_n = rev_n/10;  
              no++;
              }
          }
        
        return decimal;*/
        
        
        int ans=0;
        
        // indexing: 0 to 32
        int len=31;
        
        for(int i=0;i<=len;i++)
        {
            int bit=(n>>i)&1;
            ans=ans|(bit<<len-i);
        }
        
        return ans;
          
        
    }
}