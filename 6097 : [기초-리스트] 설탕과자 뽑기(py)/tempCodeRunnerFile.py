w, h = map(int, input().split())

arr = [[0] * w for i in range(h)]

n = int(input())

for i in range(n):
    l, d, x, y = map(int, input().split())
    x -= 1  
    y -= 1  
    if d == 0 : 
        for j in range(l):
            arr[x][y + j] = 1
    else:  
        for j in range(l):
            arr[x + j][y] = 1

# 결과 출력
for row in arr:
    print(' '.join(map(str, row)))
