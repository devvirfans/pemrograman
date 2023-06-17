# Creating Node class
class Node:
    def __init__(self, data):
        self.data = data
        self.leftChild = None
        self.rightChild = None

    # Insert method to add child nodes
    def insert(self, data):
        if self.data is None:
            self.data = data
        elif data < self.data:
            if self.leftChild is None:
                self.leftChild = Node(data)
            else:
                self.leftChild.insert(data)
        else:
            if self.rightChild is None:
                self.rightChild = Node(data)
            else:
                self.rightChild.insert(data)

    # PrintTree method to print the tree
    def PrintTree(self):
        if self.leftChild:
            self.leftChild.PrintTree()
        print(self.data)
        if self.rightChild:
            self.rightChild.PrintTree()

# Creating a root node
root = Node(30)

# Inserting child nodes
root.insert(16)
root.insert(34)
root.insert(22)
root.insert(43)
root.insert(12)
root.insert(20)

# Printing the tree
root.PrintTree()
