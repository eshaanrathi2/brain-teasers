// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // Implement your solution here
    int n = A.size();
    if(n <= 1)
        return n;
    
    int result = 1;

    int prevEnd = B[0];
    for(int start = 1; start < n; start += 1){
        if(A[start] > prevEnd){
            // Non overlapping. Add to result.
            prevEnd = B[start];
            result += 1;
        }
    }
    return result;
}