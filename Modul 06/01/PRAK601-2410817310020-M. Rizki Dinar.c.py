import numpy as np
row,col = map(int, input().split())
in_arr = []
while len(in_arr) < row*col:
    in_arr.extend(list(map(int, input().split())))

new_arr = np.asarray(np.array_split(np.array(in_arr), row))
print(new_arr) 