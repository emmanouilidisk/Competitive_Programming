def sortSecond(val): 
    return val[1]

def sortFirst(val):
	return val[0]

n = int(input())
al = []
for i in range(n):
	one = input()
	one = one.split(" ")
	one[1] = int(one[1])
	al.append(one)

al.sort(key = sortFirst)
al.sort(key = sortSecond)  
al.append(['a', 251])

point = 0
print(al[point][0], end = "")
while point < n:
	start = point + 1
	while al[point][1] == al[point + 1][1]:
		print(" " + al[point+1][0], end = "")
		point += 1
	print("", start, "", (point+1))
	if point + 1 == n:
		break
	print(al[point+1][0], end = "")
	point += 1
