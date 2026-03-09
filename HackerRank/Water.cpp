#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> h(n);
        for(int i=0;i<n;i++) cin >> h[i];

        int l = 0, r = n-1;
        int best = -1;
        int L = 0, R = 0;

        while(l < r){
            int cur = min(h[l], h[r]);

            if(cur > best){
                best = cur;
                L = l;
                R = r;
            }

            if(h[l] < h[r]) l++;
            else r--;
        }

        cout << L << " " << R << "\n";
    }

    return 0;
}