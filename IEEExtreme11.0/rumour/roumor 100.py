from math import log

q = int(input())
for i in range(q):
    a, b = map(int, input().split())
    ha = int(log(a, 2))
    hb = int(log(b, 2))
    if ha < hb:
    	maxh = hb
    	maxn = b
    	minh = ha
    	minn = a
    else:
    	maxh = ha
    	maxn = a
    	minh = hb
    	minn = b
    	
    c = 0
	
    for j in range(1, maxh-minh+1):
        maxn = maxn//2
        c += 1 
	
    
    while minn != maxn:
        #general case
        gay = int(log(abs(maxn-minn)))
        if gay != 0:
            maxn = maxn//(2**gay)
            minn = minn//(2**gay)
            c += 2*gay
        else:
            c += 2
            maxn = maxn//2
            minn = minn//2
        #Minimum required optimization
        # if abs(maxn-minn)>3:
    	   # maxn = maxn//8
    	   # minn = minn//8
    	   # c += 6
        # elif abs(maxn-minn)>1:
    	   # maxn = maxn//4
    	   # minn = minn//4
    	   # c += 4
        # else:   
    	   # maxn = maxn//2
    	   # minn = minn//2
    	   # c += 2

    print(c)
