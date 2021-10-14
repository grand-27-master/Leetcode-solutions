class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        
//         vector<int>v;
//          int n=nums.size();
//         int i=0,idx;
        
//         while(i<n)
//         {
//             idx=nums[i]-1;
            
//             if(nums[i]!=nums[idx])
//             {
//                 int temp=nums[i];
//                 nums[idx]=nums[i];
//                 nums[i]=temp;
//             }
//             else
//                 i++;
//         }   
        
//         for(int j=0;j<n;j++)
//         {
//             if(nums[j]!=j+1)
//               return v.push_back(j+1);
//         }
//         return v;
        
        vector<int> ans;
            int i = 0;
    while(i < v.size()) {
        int correctIndex = v[i] - 1;
        if(correctIndex == v.size() || v[i] == v[correctIndex]) i++;
        else {
            //swap
            int temp = v[i];
            v[i] = v[correctIndex];
            v[correctIndex] = temp;
        }

    }

    for(int j = 0 ; j < v.size() ; j++) {
        if(v[j] != j + 1) {
            ans.push_back(j + 1);
        }

    } return ans;
    }
};