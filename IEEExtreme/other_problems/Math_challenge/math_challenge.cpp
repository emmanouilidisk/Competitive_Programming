#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull combo(ull n, ull k) { 
    ull res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if ( k > n - k ) 
        k = n - k; 
  
    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1] 
    for (ull i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 

ull power(ull x, ull y) 
{ 
	const unsigned int M = 1000000007; 	
    ull res = 1;      // Initialize result 
  
    while (y > 0) 
    { 
        if (y%2 == 1) 
            res = (res*x) % M; 
        y = y/2; // y = y/2 
        x = (x*x) % M;   
    } 
    return res; 
}

int main() {
	int t;
	ull a, b, c;

	scanf("%d", &t);

	while (t--) {
		scanf("%llu%llu%llu", &a, &b, &c);


		// ull res = 1;
		ull comb = combo(b, c);
		ull res = power(a, comb);

		// for (ull i = 1; i <= comb; i++) 
		// 	res = (res*a) % M; 

		printf("%llu\n", res); 

	}
	
	return 0;
}