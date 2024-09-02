h,w = input().split()
h = int(h)
w = int(w)

arr = [[0] * w for i in range(h)]

n = int(input())
for i in range(n):
    l, d, x, y = map(int, input().split())
    x = x-1
    y = y-1
    for j in range(l):
        if d == 0:
            arr[x][y+j] = 1
        else:
            arr[x+j][y] = 1

for row in arr:
    print(' '.join(map(str, row)))
