class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        k = 0
        isRepeat = 0
        
        for i in range(1, len(nums)):                      
            if nums[i] == nums[k]:
                # check if same as previous, first flag
                if isRepeat == 0:
                    k += 1
                    isRepeat = 1                                    
                    
            # distinct
            else:
                k += 1                    
                isRepeat = 0
            
            nums[k] = nums[i]
        return k+1