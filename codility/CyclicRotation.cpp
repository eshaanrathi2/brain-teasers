// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

void reverseArr(vector<int>& A, int left, int right){
    while(left < right){
        int temp = A[left];
        A[left] = A[right];
        A[right] = temp;
        left += 1;
        right -= 1;
    }
}

vector<int> solution(vector<int> &A, int K) {
    // Implement your solution here

    // Space: O(1), Time: O(N)
    // A = "----->-->"; k = 3
    // result = "-->----->";

    // reverse "----->-->" we get "<--<-----"
    // reverse "<--" we get "--><-----"
    // reverse "<-----" we get "-->----->"

    int n = A.size();

    if(n <= 1)
        return A; // Empty i/p boundary condition.

    K = K % n;
    
    reverseArr(A,0,n-1); // Or use std::reverse() function.
    reverseArr(A,0,K-1);
    reverseArr(A,K,n-1);
    
    // reverse(A, A + n);
    // reverse(A, A + K);
    // reverse(A+K, A + n);

    return A;
}