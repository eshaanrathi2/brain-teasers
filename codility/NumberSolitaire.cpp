// you can use includes, for example:
// #include <algorithm>
#include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    // cout<<max
    int n = A.size();
    vector<int>maxSum(n,0);
    maxSum[0] = A[0];
    for(int idx = 1; idx < n; idx += 1){
        int prevCounter = 1;
        int prevMax = maxSum[idx - prevCounter];
        prevCounter += 1;
        while(prevCounter <= 6 && idx - prevCounter >= 0){
            prevMax = max(prevMax, maxSum[idx - prevCounter]);
            prevCounter += 1;
        }
        maxSum[idx] = A[idx] + prevMax;
    }
    return maxSum[n-1];
}