class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children if children is not None else []

def build_tree(input_list, index):
    if index[0] >= len(input_list):
        return None
    
    root = Node(input_list[index[0]])
    index[0] += 1
    children_count = input_list[index[0]]
    index[0] += 1
    for _ in range(children_count):
        root.children.append(build_tree(input_list, index))
    return root

class Solution:
    def postorder(self, root: 'Node') -> list[int]:
        ans = []
        if not root:
            return ans
        stk = [root]
        while stk:
            root = stk.pop()
            ans.insert(0, root.val)
            for child in root.children:
                stk.append(child)
        return ans

# Example usage:
input_list = [1, 3, 2, 0, 3, 0, 4, 0]  # Example input
index = [0]
root = build_tree(input_list, index)
solution = Solution()
result = solution.postorder(root)
print(result)
