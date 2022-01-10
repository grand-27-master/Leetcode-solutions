class Solution {
    private:
    bool checkCount(int a1[], int a2[])
    {
        for(int i=0;i<26;i++)
        {
            if(a1[i]!=a2[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        // sort(s2.begin(),s2.end());
        // if(s2.find(s1))
        //     return true;
        // return false;
        
        
        
        // to store count of characters
        int arr1[26]={0};
        
        for(int i=0;i<s1.size();i++)
        {
            int idx=s1[i]-'a';
            arr1[idx]++;
        }
        
        // make window of size same as s1, which will be used to compare with s2
        
        int window_size=s1.size();
        int i=0;
        int arr2[26]={0};
        
        while(i<window_size and i<s2.size())
        {
            int idx=s2[i]-'a';
            arr2[idx]++;
            i++;
        }
        if(checkCount(arr1,arr2))
            return 1;
      
        // further process the window
        
        while(i<s2.size())
        {
            char newch=s2[i];
            int idx=newch-'a';
            arr2[idx]++;
            
            // decrementing count of chars which have already been part of window
            char oldch=s2[i-window_size];
            idx=oldch-'a';
            arr2[idx]--;
            i++;
            
            if(checkCount(arr1,arr2))
            return 1;
        }
         
        return 0;
    }
};

