#include <iostream>

using namespace std;

int main(){
    unsigned long long int k, j;
    scanf("%llu%llu", &k, &j);

    if (k <= j / 2){
        cout << k;
    } else if (j <= k/2) {
        cout << j;
    } else {
        unsigned long long int res = k/3 + j/3;
        cout << res;
    }
    
    return 0;
}