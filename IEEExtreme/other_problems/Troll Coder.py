n = int(input())
arr = ['0'] * n
print('Q ' + ' '.join(arr))
ans = int(input())
i = 0
while (ans < n):
    arr[i] = '1'
    print('Q ' + ' '.join(arr))
    tempAns = int(input())
    if (tempAns > ans):
        ans = tempAns
    else:
        arr[i] = '0'
    i += 1

print('A ' + ' '.join(arr))
