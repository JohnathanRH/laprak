arr = []
current_least = 0
least_index = 0

while len(arr) < 3:
    arr.extend(list(map(int, input().split())))

for i in range(len(arr)):
    current_least = arr[i]
    for j in range(i, len(arr)):
        if arr[j] <= current_least:
            current_least = arr[j]
            least_index = j
            
    arr[i], arr[least_index] = arr[least_index], arr[i]

print(arr)