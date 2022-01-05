times = int(input())
for w in range(times):
	inp = input()
	inp = inp.split(" ")
	l = int(inp[0])
	h = int(inp[1])
	n = int(inp[2])
	d1 = int(inp[3])
	d2 = int(inp[4])
	res = 0

	if not(((d1-n+1)%l == 0) or ((d2-n+1)%l == 0)):
		b = int((d2-n+1)/l) - int ((d1-n+1)/l) + 1
		a = abs(((d1-n+1)%l) - ((d2-n+1)%l)) + 1
		if ((d1 - n + 1)%l) > (d2 - n + 1)%l:
	   		d1, d2 = d1-a+1, d2+a-1
	elif ((d1-n+1)%l) == 0:
		b = int((d2-n+1)/l) - int ((d1-n+1)/l) + 2
		a = abs(l - ((d2-n+1)%l)) + 1
		d1, d2 = d1-a+1, d2+a-1
	elif ((d2-n+1)%l) == 0:
		b = int((d2-n+1)/l) - int ((d1-n+1)/l) + 2
		a = abs(l - ((d1-n+1)%l)) + 1


	for i in range(n, d1):
		res = res^i
		
	for i in range(b):
		if n + l*h - d1+i*l < l:
			break
		else:
			for j in range(a, l):
				res = res^(j+d1+i*l)

	for i in range(d2+l-a+1, n + l*h):
		res = res^i

	print(res)