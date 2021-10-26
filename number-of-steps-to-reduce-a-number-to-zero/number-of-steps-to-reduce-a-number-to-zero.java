class Solution {
    public int numberOfSteps(int num) {
        return print(num, 0);
    }
    
    public int print(int num, int steps)
    {
        if(num==0)
            return steps;
        
        if(num%2==0)
            return print(num/2,steps+1);
        
        return print(num-1,steps+1);
    }
}