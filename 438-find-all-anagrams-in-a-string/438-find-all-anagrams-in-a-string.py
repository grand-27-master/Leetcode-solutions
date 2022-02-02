class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        anapos,occu,expocc=[],[0]*26,[0]*26
        n,m=len(s),len(p)
        if n<m:
            return []
        for i in range(m-1):
            occu[ord(s[i])-97]+=1
        for i in range(m):
            expocc[ord(p[i])-97]+=1
        for i in range(n-m+1):
            occu[ord(s[i+m-1])-97]+=1
            if expocc==occu:
                anapos.append(i)
            occu[ord(s[i])-97]-=1
        return anapos
            