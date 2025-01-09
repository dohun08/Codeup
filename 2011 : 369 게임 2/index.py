a, b = map(int, input().split())

for i in range(a, b+1) :
    if '3' in str(i) or '6' in str(i) or '9' in str(i):
        for j in range(str(i).count('3') + str(i).count('6') + str(i).count('9')) :
            print('K', end='')
        print()
    else :
        print(i)

