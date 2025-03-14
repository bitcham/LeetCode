# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root:
            return False

        d = [(root, targetSum - root.val)]

        while d:
            node, currSum = d.pop()
            if not node.left and not node.right and currSum == 0:
                return True
            if node.left:
                d.append((node.left, currSum - node.left.val))
            if node.right:
                d.append((node.right, currSum - node.right.val))

        return False
