class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        char ans=letters[0];
        int start=0,end=letters.length-1;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            
            if(target>=letters[mid])
                start=mid+1;
            else
            {
                ans=letters[mid];
                end=mid-1;
            }
        }
        return ans;
    }
}