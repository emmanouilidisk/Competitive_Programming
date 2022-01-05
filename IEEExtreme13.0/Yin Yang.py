n = int(input())

flag = 1
for i in range(n):
    if flag == 1:
        print('y', end='')
        flag = 0
    else:
        print('Y', end='')
        flag = 1
