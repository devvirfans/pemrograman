import heapq

# Membuat heap kosong
heap = []

# Menyisipkan elemen ke dalam heap
heapq.heappush(heap, 4)
heapq.heappush(heap, 1)
heapq.heappush(heap, 7)
heapq.heappush(heap, 3)
heapq.heappush(heap, 2)

print("Heap setelah penyisipan elemen: ", heap)

# Menghapus elemen minimum dari heap
min_element = heapq.heappop(heap)
print("Elemen minimum yang dihapus: ", min_element)
print("Heap setelah penghapusan elemen: ", heap)

# Mengakses elemen minimum tanpa menghapusnya
min_element = heapq.heappop(heap)
print("Elemen minimum tanpa penghapusan: ", min_element)
print("Heap setelah pengaksesan elemen minimum: ", heap)

# Mengekstrak elemen minimum dari heap
min_element = heapq.heappop(heap)
print("Elemen minimum yang dikeluarkan: ", min_element)
print("Heap setelah ekstraksi elemen minimum: ", heap)

# Menggunakan heapify untuk mengubah array menjadi heap
arr = [9, 5, 3, 8, 6]
heapq.heapify(arr)
print("Heap setelah heapify: ", arr)
