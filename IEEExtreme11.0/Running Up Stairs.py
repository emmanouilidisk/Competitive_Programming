def fibonacci(n):
    a = 1
    b = 1
    if n == 0:
        return a
    elif n == 1:
        return b
    else:
        for i in range(2,n+1):
            c = a + b
            a = b
            b = c
        return b

T = int(input())
for t in range(T):
    N = int(input())
    print(fibonacci(N))
