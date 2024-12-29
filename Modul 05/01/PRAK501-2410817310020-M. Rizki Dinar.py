def max_bilangan(a, b, c, d):
    arr = [a, b, c, d]
    max_now = arr[0]
    for num in arr:
        if num > max_now:
            max_now = num
    return max_now

a, b, c, d = map(int, input().split())
hasil = max_bilangan(a, b, c, d)
print(hasil)