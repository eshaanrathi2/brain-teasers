// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &A) {
    // Implement your solution here
    int n = A.size();
    for(int rope = 0; rope < n-1; rope++){
        // If len(rope) >= k, pass.        
        // If len(rope) < k and len(rope + 1) < k, merge rope and rope + 1.
        if(A[rope] < K && A[rope+1] < K){
            A[rope+1] += A[rope]; // Merge rope and rope + 1.
            A[rope] = 0; // Set len(rope) as 0, as it doesn't exist now.
        }
    }
    int result = 0;
    for(int rope : A){
        if(rope >= K)
            result += 1;
    }
    return result;
}