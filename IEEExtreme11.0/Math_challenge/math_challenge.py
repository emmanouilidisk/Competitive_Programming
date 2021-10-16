from math import floor

def combo(n, k): 
    # since C(n, k) = C(n, n - k) 
    if(k > n - k): 
        k = n - k 
    # initialize result 
    res = 1
    # Calculate value of  
    # [n * (n-1) *---* (n-k + 1)] / [k * (k-1) *----* 1] 
    for i in range(k): 
        res = res * (n - i) 
        res = res / (i + 1) 
    return res 


def mpower(x, y) : 
    res = 1     # Initialize result 
    M = 1000000007 
  
    while (y > 0) : 
          
        # If y is odd, multiply 
        # x with result 
        if (y%2 ==  1) : 
            res = (res * x) % M 
  
        # y must be even now 
        y = floor(y / 2) 
        print(y)     # y = y/2 
        x = (x * x) % M
          
    return res 


t = int(input())
for i in range(t):
	abc = input()
	a_b_c = abc.split(" ")
	a = int(a_b_c[0])
	b = int(a_b_c[1])
	c = int(a_b_c[2])
	
	comb = combo(b, c)
	res = mpower(a, floor(comb))
	print(res)

