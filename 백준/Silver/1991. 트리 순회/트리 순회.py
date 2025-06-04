N = int(input())
tree = {}


for i in range (N):
    root, left, right = map(str, input().split())
    tree[root] = (left, right)

def preorder(node):
    if node == '.':
        return ""
    result = node
    result += preorder(tree[node][0])
    result += preorder(tree[node][1])

    return result

def inorder(node):
    if node == '.':
        return ""
    result = inorder(tree[node][0])
    result += node
    result += inorder(tree[node][1])

    return result

def postorder(node):
    if node == '.':
        return ""
    result = postorder(tree[node][0])
    result += postorder(tree[node][1])
    result += node

    return result
 

print(preorder('A'))
print(inorder('A'))
print(postorder('A'))

