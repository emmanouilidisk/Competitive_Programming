/*
Problem: Anomalies
Link: https://csacademy.com/contest/archive/task/anomalies/
Author: Emmanouilidis Konstantinos
*/

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;


int main() {
    //get input
    int N,K,i;
    int count=0;
    cin >> N >> K;
    int arr[N];
    for( i=0;i<N;i++){
        cin >> arr[i];
    }
    
    //solution
    sort(arr,arr+N);
    if(arr[1]-arr[0]>K)count++;
    for( i=1;i<N;i++){
        if(abs(arr[i]-arr[i+1])>K && abs(arr[i]-arr[i-1]>K))count++;
    }
    
    cout << count;
    
   
}