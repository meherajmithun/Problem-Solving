#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findPermutation(int N, int K) {
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        P[i] = i + 1;
    }

    if (K == 1) {
        // Any permutation where P[i] != i is valid
        for (int i = 0; i < N; ++i) {
            if (P[i] == i + 1) {
                if (i + 1 < N) {
                    swap(P[i], P[i + 1]);
                } else {
                    // If N is odd, it's impossible to have P[i] != i for all i
                    return {-1};
                }
            }
        }
        return P;
    }

    // Check if the number of elements in each residue class is even
    for (int r = 0; r < K; ++r) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            if ((i + 1) % K == r) {
                count++;
            }
        }
        if (count % 2 != 0) {
            return {-1};
        }
    }

    // Swap elements within the same residue class
    for (int r = 0; r < K; ++r) {
        vector<int> indices;
        for (int i = 0; i < N; ++i) {
            if ((i + 1) % K == r) {
                indices.push_back(i);
            }
        }
        for (int i = 0; i < indices.size(); i += 2) {
            swap(P[indices[i]], P[indices[i + 1]]);
        }
    }

    return P;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> P = findPermutation(N, K);
        if (P[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < N; ++i) {
                cout << P[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}