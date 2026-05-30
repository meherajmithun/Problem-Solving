#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // We want to minimize the sum.
        // Ideal: make all elements negative.
        // Strategy: scan left to right, track flip parity.
        // If current element (after flips so far) is positive, apply operation at i+1.
        // Operation at index i flips prefix [1..i], i.e., indices 0..i-1 in 0-indexed.
        // Condition: current a[i] > 0 (after previous flips).
        
        vector<int> ops;
        int parity = 0; // 0 = even flips, 1 = odd flips
        
        for(int i = 0; i < n; i++) {
            // current value of a[i]
            long long cur = (parity % 2 == 0) ? a[i] : -a[i];
            if(cur > 0) {
                // apply operation at index (i+1) in 1-indexed
                ops.push_back(i + 1);
                parity++;
                // after operation, cur becomes -cur (negative), good
            }
        }
        
        cout << ops.size() << "\n";
        for(int i = 0; i < (int)ops.size(); i++) {
            cout << ops[i];
            if(i + 1 < (int)ops.size()) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}