/*
Problem: Frequent Numbers
Link: https://csacademy.com/contest/archive/task/frequent-numbers
Author: Emmanouilidis Konstantinos
*/
#include <iostream>

using namespace std;

int main() {
    int N,K,i;
    int count=0;
    cin >> N >> K;
    int arr[N];
    int freq[1002] = {0};
    for( i=0;i<N;i++){
        cin >> arr[i];
    }
    i=0;
    while(i<N){
        freq[arr[i]]=freq[arr[i]]+1;
        i++;
    }
    for(i=0;i<1001;i++){
        if(freq[i] >= K) count++;
    }
    cout << count;
}