# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recoverTree(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        
        def sortBST(node):
            if not node:
                return []
            return sortBST(node.left) + [node.val] + sortBST(node.right)
        
        sortedtree = sortBST(root)
        
        #find the two values that are reversed
        
        sortedtreel = sorted(sortedtree)
        
        for i in range(len(sortedtreel)):
            if sortedtreel[i] < sortedtree[i]:
                val1 = sortedtree[i]
            elif sortedtreel[i] > sortedtree[i]:
                val2 = sortedtree[i]
            else:
                continue
        
        #create function to traverse orignial tree and correct reversed nodes
        
        def findnode(node):
            if node:
                
                findnode(node.left)
                
                if node.val == val1:
                    node.val = val2
                elif node.val == val2:
                    node.val = val1
                
                findnode(node.right)
        
        return findnode(root)
        