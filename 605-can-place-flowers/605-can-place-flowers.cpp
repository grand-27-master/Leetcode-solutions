class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        
        if(n==0)
            return true;
        if(len==1 and flowerbed[0]==0 and n==1)
            return true;
        
        for(int i=0;i<len;i++)
        {
            if(i==0){               // check for i=0
            if( flowerbed[i]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
            }
            else  if(i==len-1){         // check for i=flowerbed.size()-1;
                if(flowerbed[i]==0 && flowerbed[i-1]==0){
                flowerbed[i]=1;
                n--;
            }
            }
          else{ if(flowerbed[i]==0 && flowerbed[i-1]==0 &&flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
        }
        }
            
              if(n<1){
        return true;
    }
        return false;
    }
    
};