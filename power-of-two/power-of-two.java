class Solution {
    public boolean isPowerOfTwo(int n) {
       // if(n==0)
       //      return false;
       //  if(n==1||n==2)
       //      return true;
       //  long num=2;
       //  while(num*2<=n){
       //      num=num*2;
       //      if(num==n)
       //          return true;
       //  }
       //  return false;
        
        return (Math.log10(n))/(Math.log10(2))%1==0;
    }
}