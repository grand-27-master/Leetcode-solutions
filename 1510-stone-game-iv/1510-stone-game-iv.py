class Solution:
    @cache
    def winnerSquareGame(self, n: int) -> bool:
        if n <= 0:
            return False
        for i in range(floor(sqrt(n)),0,-1):
            if self.winnerSquareGame(n-i**2) ==0:
                return True
        return False