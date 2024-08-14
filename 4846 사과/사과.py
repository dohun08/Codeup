n = int(input())
num = 0
for i in range(0, n) :
    a, b = map(int, input().split())
    num += b%a
    
print(num)