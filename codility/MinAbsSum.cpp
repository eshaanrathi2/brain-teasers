// This solution is not correct. Update this.

// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    int n = A.size();
    vector<int>minSum(n+1,0);
    minSum[0] = abs(A[0]);
    for(int idx = 1; idx <= n; idx+=1){
        minSum[idx] = min(abs(minSum[idx-1]-A[idx]), abs(minSum[idx-1]+A[idx]));
    }
    return minSum[n];
}