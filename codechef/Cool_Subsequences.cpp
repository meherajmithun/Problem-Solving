#include <iostream>
#include <vector>

using namespace std;

void findCoolSubsequence(int N, vector<int>& A) {
    // If N == 1, no complement exists, so no cool subsequence
    if (N == 1) {
        cout << -1 << endl;
        return;
    }
    
    // Any single element is a cool subsequence
    // Select the first element
    int K = 1;
    int element = A[0];
    
    // Output the result
    cout << K << endl;
    cout << element << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        findCoolSubsequence(N, A);
    }
    
    return 0;
}