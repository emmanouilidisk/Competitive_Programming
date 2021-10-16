n = int(input())
if n == -1:
    print(-1)

arr = []
for i in range(1, 2*n + 1, 2):
    print(i, i+1)
    resp = input()
    if resp == 'MATCH':
        arr.append(0)
        arr.append(0)
    elif resp == '-1':
        print(-1)
    else:
        resp = resp.split(' ')
        arr.append(int(resp[0]))
        arr.append(int(resp[1]))

for i in range(1, n+1):
    res_list = [j for j, value in enumerate(arr) if value == i]
    if res_list:
        arr[res_list[0]] = arr[res_list[1]] = 0
        print(res_list[0]+1, res_list[1]+1)
        resp = input()
        if resp == '-1':
            print(-1)
print(-1)
