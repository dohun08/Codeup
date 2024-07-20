a = 0
b = 0
c = 0
stop = 1
n = int(input())
while n>0 :
    if n-300>= 0 :
        n-=300
        a+=1
    elif n-60 >= 0 :
        n-=60
        b+=1
    elif n-10 >= 0 :
        n-=10
        c+=1
    else :
        print("-1")
        stop-=1
        break
if stop :
    print(a, b, c)
