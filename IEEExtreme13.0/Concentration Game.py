n = int(input())
N = [[] for i in range(n+2)]
for i in range(1,2*n,2):
    print(i,(i+1))
    inp = input()
    
    if inp == "-1":
        exit(1) 
    if inp=="MATCH":
        continue
    a,b=inp.split()
    a = int(a)
    b = int(b)
    N[a].append(i)
    N[b].append(i+1)

for j in range(1, n+1):
    if N[j]:
        print(N[j][0],N[j][1])
        
print(-1)
    