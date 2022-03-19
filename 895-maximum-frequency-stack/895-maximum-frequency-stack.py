from heapq import heappop,heappush

class FreqStack:

    def __init__(self):
        self.heap = []
        self.counts = collections.defaultdict(int)
        self.size = 0
        

    def push(self, val: int) -> None:
        self.counts[val]+=1
        self.size +=1
        heappush(self.heap,(-self.counts[val],-self.size,val))
        
        
        
        

    def pop(self) -> int:
        _,_,val = heappop(self.heap)
        self.counts[val]-=1
        if self.counts[val] == 0:
            del self.counts[val]
        return val