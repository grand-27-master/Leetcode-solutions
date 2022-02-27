import math
from collections import namedtuple

Element = namedtuple('Element', ['node', 'level', 'index'])

class Solution:
    def widthOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        queue = [Element(root, 0, 1)]
        res = 0
        cur_lvl = 0
        min_lvl, max_lvl = math.inf, -math.inf
        while queue:
            element = queue.pop(0)
            if cur_lvl == element.level:
                min_lvl = min(min_lvl, element.index)
                max_lvl = max(max_lvl, element.index)
            else:
                cur_lvl = element.level
                res = max(res, max_lvl - min_lvl + 1)
                min_lvl, max_lvl = element.index, element.index
            if element.node.left:
                queue.append(Element(element.node.left, cur_lvl + 1, 2 * element.index))
            if element.node.right:
                queue.append(Element(element.node.right, cur_lvl + 1, 2 * element.index + 1))
        return max(res, max_lvl - min_lvl + 1)