import heapq

heap = []

heapq.heappush(heap, 20)
heapq.heappush(heap, 10)
heapq.heappush(heap, 15)
heapq.heappush(heap, 23)
heapq.heappush(heap, 12)

print("Heap: ", heap)

min_element = heapq.heappop(heap)
print("Elemen heap yang dikeluarkan: ", min_element)
print("Heap setelah dilakukan pengeluaran: ", heap)

min_element = heapq.heappop(heap)
print("Elemen heap yang dikeluarkan: ", min_element)
print("Heap setelah dilakukan pengeluaran: ", heap)

min_element = heapq.heappop(heap)
print("Elemen heap yang dikeluarkan: ", min_element)
print("Heap setelah dilakukan pengeluaran: ", heap)

arr = [1, 5, 4, 2, 7]
heapq.heapify(arr)
print("Heap setelah heapify: ", arr)
