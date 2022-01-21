class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        
        int gas_sum=0,cost_sum=0;
        for(int g:gas)
            gas_sum+=g;
        
         for(int c:cost)
            cost_sum+=c;
        
        if(gas_sum-cost_sum<0)
            return -1;
        
        int idx=0,tank=0;
        
        for(int i=0;i<gas.length;i++)
        {
            tank+=gas[i];
            tank-=cost[i];
            if(tank<0)
            {
                idx=i+1;
                tank=0;
            }
        }
        return idx;
    }
}