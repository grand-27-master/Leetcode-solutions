class Solution:
    def minDominoRotations(self, tops: List[int], bottoms: List[int]) -> int:
        
        topMostFreq=max(set(tops), key=tops.count)
        bottomMostFreq=max(set(bottoms),key=bottoms.count)
        topMaxCount=tops.count(topMostFreq)
        bottomMaxCount=bottoms.count(bottomMostFreq)
        rotate=0
        if(topMaxCount>=bottomMaxCount):
            isTop=1
            for i in range(len(tops)):
                if tops[i]!=topMostFreq:
                    rotate+=1
                    tops[i]=bottoms[i]
                    
        else:
            isTop=0
            for j in range(len(bottoms)):
                if bottoms[j]!=bottomMostFreq:
                    rotate+=1
                    bottoms[j]=tops[j]
        if isTop==1:
            if len(set(tops))!=1:
                return -1
        else:
            if len(set(bottoms))!=1:
                return -1
        return rotate
        