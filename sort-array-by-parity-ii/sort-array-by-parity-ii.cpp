class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
         vector<int>v;
         int n = nums.size();
        vector<int> result(n);
        int j=0,k=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                result[j] = nums[i];
                j+=2;
            }
            else{
                result[k] = nums[i];
                k+=2;
            }
        }
        return result;
    }
};