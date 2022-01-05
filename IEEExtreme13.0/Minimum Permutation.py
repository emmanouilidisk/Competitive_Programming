nm = input().split(' ')
n = int(nm[0])
m = int(nm[1])

arr = input().split(' ')
arr = list(map(int, arr))
st = input().split(' ')
st = list(map(int, st))


st.sort()
for s in st:
    if (s > max(arr)):
        arr.insert(len(arr), s)
    else:
        arr.insert(next(x[0] for x in enumerate(arr) if x[1]>=s), s)

arr = list(map(str, arr))
print(' '.join(arr))
