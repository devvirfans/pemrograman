# Step 1: Define a Node class to represent a node in the linked list
# Langkah 1: Mendefinisikan kelas node untuk merepresentasi node pada linked list

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Step 2: Define a LinkedList class to represent the linked list
# Langkah 2: Mendefinisikan kelas Linked List untuk merepresentasikan Linked List

class LinkedList:
    def __init__(self):
        self.head = None

    def addToEnd(self, data):
        my_node = Node(data)
        if self.head is None:
            self.head = my_node
        else:
            current = self.head
            while current.next is not None:
                current = current.next
            current.next = my_node

    def addToBeginning(self, data):
        my_node = Node(data)
        my_node.next = self.head
        self.head = my_node

    def deleteNode(self, data):
        if self.head is None:
            return
        if self.head.data == data:
            self.head = self.head.next
            return

        previous = self.head
        current = self.head.next

        while current is not None and current.data is not data:
            previous = current
            current = current.next
        if current is None:
            return

        previous.next = current.next

    def printList(self):
        if self.head is None:
            print("Linked list is empty")
        else:
            current = self.head
            print("Linked List:")
            while current is not None:
                print(current.data, end=" -> ")
                current = current.next
            print("None")

# Example usage:

# Create a new linked list
linkedlist = LinkedList()
linkedlist.addToEnd(1)
linkedlist.addToEnd(2)
linkedlist.addToEnd(3)
linkedlist.addToBeginning(5)
linkedlist.deleteNode(2)
linkedlist.printList()
