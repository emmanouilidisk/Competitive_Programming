sab = input().split(' ')
s = int(sab[0])
a = int(sab[1])
b = int(sab[2])

res = []

def funccc(a, b, s):
    if b < a:
        return False
    times = s // b
    if s%b >= a:
        res.append(times * (str(b)+' '))
        res.append(str(s%b)+ ' ')
        return True
    elif s%b == 0:
        res.append(times * (str(b)+' '))
        return True
    else:
        temp = times - (a//((s%b)+1))
        if times > 1:
            res.append(temp * (str(b)+' '))
        return funccc(a, b-(a//((s%b)+1)), s - temp*b)

bool = funccc(a, b, s)
if bool:
    res.reverse()
    print('YES')
    print(''.join(res))
else:
    print('NO')
