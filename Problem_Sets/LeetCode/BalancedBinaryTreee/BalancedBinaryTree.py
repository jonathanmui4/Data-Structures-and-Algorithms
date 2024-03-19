# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def getHeight(root: Optional[TreeNode]) -> int:
            if not root:
                return 0
            lHeight = getHeight(root.left)
            rHeight = getHeight(root.right)
            if lHeight == -1 or rHeight == -1 or abs(lHeight - rHeight) > 1:
                return -1
            return max(lHeight, rHeight) + 1
        
        if getHeight(root) < 0:
            return False
        return True
        