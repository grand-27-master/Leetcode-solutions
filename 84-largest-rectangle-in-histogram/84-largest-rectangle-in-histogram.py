class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        heights.append(0)
        res = 0
        stack = []
        for i, height in enumerate(heights):
            new_i = i
            while stack and heights[stack[-1]] > height:
                top = stack.pop()
                res = max(res, (i - top) * heights[top])
                new_i = top
            heights[new_i] = height
            stack.append(new_i)
        
        return res
        