class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
//        int s=0,e=arr.size()-1;
//        int m=(s+e)/2;
        
//        while(s<=e)
//        {
//            if(arr[m]>arr[m+1])
//                e=m;
//            else
//                s=m+1;
//        }
//         return s;
        int max_val=0,max_index=0;

        for (int i = 0; i < arr.size(); i++) {
            if(max_val<arr[i])
            {
                max_val=arr[i];
                max_index=i;
            }
        }
        return max_index;
    }
};