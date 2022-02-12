class Solution(object):
    def ladderLength(self, beginWord, endWord, wordList):
        """
        :type beginWord: str
        :type endWord: str
        :type wordList: List[str]
        :rtype: int
        """
        
        if endWord not in wordList: return 0
        # Create adjacency list
        neighbors = defaultdict(list)
        for word in wordList:
            for index in range(len(word)):
                pattern = word[:index] + "*" + word[index + 1:]
                neighbors[pattern].append(word)
        
        q = deque([beginWord])
        visited = set([beginWord])
        length = 1
        # Initiate BFS
        while q:
            for _ in range(len(q)):
                word = q.popleft()
                if word == endWord: return length
                # Grab Key to visit neighbors
                for index in range(len(word)):
                    pattern = word[:index] + "*" + word[index + 1:]
                    # Visit Neighbors
                    for neighbor in neighbors[pattern]:
                        if neighbor not in visited:
                            visited.add(neighbor)
                            q.append(neighbor)
            # Explored node
            length += 1
            
        return 0
        