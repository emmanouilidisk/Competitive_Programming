N, M = map(int, input().split())
A = list(map(int, input().split()))
S = list(map(int, input().split()))
S.sort()
i = j = 0
while i < len(S) and j < len(A):
    if A[j] > S[i]:
        A.insert(j, S[i])
        j += 1
        i += 1
    else:
        j+=1
if i < len(S):
    A.extend(S[i:])
print(*A)