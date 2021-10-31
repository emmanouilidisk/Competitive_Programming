#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long q,a,b,ha,hb,maxh,minh,maxn,minn,c;
    scanf("%llu", &q);
    for (unsigned long long i = 0; i < q; i++){
        scanf("%llu%llu", &a, &b);
        ha = log2(a);
        hb = log2(b);
        if (ha < hb) {
    		maxh = hb;
    		maxn = b;
    		minh = ha;
    		minn = a;
	    } else {
		maxh = ha;
		maxn = a;
		minh = hb;
		minn = b;
	    }
		c = 0;
		while (minh<maxh){
		    maxn = maxn/2;
		    maxh--;
		    c++;
		}
		
		while (minn!=maxn){
		    maxn = maxn/2;
		    minn = minn/2;
		    c += 2;
		}
		printf("%llu\n",c);
    }
    

return 0;
}