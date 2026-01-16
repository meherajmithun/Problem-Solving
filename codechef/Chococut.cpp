#include<bits/stdc++.h>
using namespace std;

int solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    if (k == 0) {
        return n * m;
    }
    
    int mx = 0;
    
    for (int i = 1; i < m; i++) {
        int piece1 = n * i;
        int piece2 = n * (m - i);
        if (piece1 >= k) {
            if (piece2 > mx) {
                mx = piece2;
            }
        }
        if (piece2 >= k) {
            if (piece1 > mx) {
                mx = piece1;
            }
        }
    }
    
    for (int j = 1; j < n; j++) {
        int piece1 = j * m;
        int piece2 = (n - j) * m;
        if (piece1 >= k) {
            if (piece2 > mx) {
                mx = piece2;
            }
        }
        if (piece2 >= k) {
            if (piece1 > mx) {
                mx = piece1;
            }
        }
    }
    
    if (n * m >= k) {
    } else {
        return 0;
    }
    
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        cout << solve() << "\n";
    }
    
    return 0;
}