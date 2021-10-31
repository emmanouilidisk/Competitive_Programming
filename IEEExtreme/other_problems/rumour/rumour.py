from math import log 

q = int(input())
for i in range(q):
	ab = input()
	ab = ab.split(" ")
	a = int(ab[0])
	b = int(ab[1])
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
	    maxn = int(maxn/2)
	    c += 1 
	

	while minn != maxn:
		maxn = int(maxn/2)
		minn = int(minn/2)
		c += 2

	print(c)
