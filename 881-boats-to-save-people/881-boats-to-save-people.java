class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int ans=0;
        int i=0,j=people.length-1;
        
        Arrays.sort(people);
        
        while(i<=j)
        {
            ans++;
            if(people[i]+people[j]<=limit)
                i++;
            j--;
        }
        
        return ans;
    }
}