n=int(input())
class newNode:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None
def insertLevelOrder(arr, root, i, n):
    if i < n:
        temp = newNode(arr[i])
        root = temp
        root.left = insertLevelOrder(arr, root.left,
                                     2 * i + 1, n)
        root.right = insertLevelOrder(arr, root.right,
                                      2 * i + 2, n)
        k=root
    return root
def inOrder(root):
    if root != None and root.data!=0:
        inOrder(root.left)
        print(root.data,end=" ")
        inOrder(root.right)
if __name__ == '__main__':
    arr=list(map(int,input().split()))
    root = None
    root = insertLevelOrder(arr, root, 0, n)
    inOrder(root)