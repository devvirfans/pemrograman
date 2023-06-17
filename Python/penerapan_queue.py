class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)

    def size(self):
        return len(self.items)

spotify = Queue()

spotify.enqueue("Coldplay")
spotify.enqueue("Maroon 5")
spotify.enqueue("Oasis")

song1 = spotify.dequeue()
song2 = spotify.dequeue()
song3 = spotify.dequeue()

print("Dequeued items:")
print("- ",song1)
print("- ",song2)
print("- ",song3)

